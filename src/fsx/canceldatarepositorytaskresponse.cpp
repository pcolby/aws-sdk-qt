/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
