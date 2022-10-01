// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceldatarepositorytaskresponse.h"
#include "canceldatarepositorytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CancelDataRepositoryTaskResponse
 * \brief The CancelDataRepositoryTaskResponse class provides an interace for FSx CancelDataRepositoryTask responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::cancelDataRepositoryTask
 */

/*!
 * Constructs a CancelDataRepositoryTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelDataRepositoryTaskResponse::CancelDataRepositoryTaskResponse(
        const CancelDataRepositoryTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CancelDataRepositoryTaskResponsePrivate(this), parent)
{
    setRequest(new CancelDataRepositoryTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelDataRepositoryTaskRequest * CancelDataRepositoryTaskResponse::request() const
{
    Q_D(const CancelDataRepositoryTaskResponse);
    return static_cast<const CancelDataRepositoryTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CancelDataRepositoryTask \a response.
 */
void CancelDataRepositoryTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelDataRepositoryTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CancelDataRepositoryTaskResponsePrivate
 * \brief The CancelDataRepositoryTaskResponsePrivate class provides private implementation for CancelDataRepositoryTaskResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CancelDataRepositoryTaskResponsePrivate object with public implementation \a q.
 */
CancelDataRepositoryTaskResponsePrivate::CancelDataRepositoryTaskResponsePrivate(
    CancelDataRepositoryTaskResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CancelDataRepositoryTask response element from \a xml.
 */
void CancelDataRepositoryTaskResponsePrivate::parseCancelDataRepositoryTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelDataRepositoryTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
