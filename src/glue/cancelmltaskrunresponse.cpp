// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelmltaskrunresponse.h"
#include "cancelmltaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CancelMLTaskRunResponse
 * \brief The CancelMLTaskRunResponse class provides an interace for Glue CancelMLTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::cancelMLTaskRun
 */

/*!
 * Constructs a CancelMLTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
CancelMLTaskRunResponse::CancelMLTaskRunResponse(
        const CancelMLTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CancelMLTaskRunResponsePrivate(this), parent)
{
    setRequest(new CancelMLTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelMLTaskRunRequest * CancelMLTaskRunResponse::request() const
{
    Q_D(const CancelMLTaskRunResponse);
    return static_cast<const CancelMLTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CancelMLTaskRun \a response.
 */
void CancelMLTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelMLTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CancelMLTaskRunResponsePrivate
 * \brief The CancelMLTaskRunResponsePrivate class provides private implementation for CancelMLTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CancelMLTaskRunResponsePrivate object with public implementation \a q.
 */
CancelMLTaskRunResponsePrivate::CancelMLTaskRunResponsePrivate(
    CancelMLTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CancelMLTaskRun response element from \a xml.
 */
void CancelMLTaskRunResponsePrivate::parseCancelMLTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelMLTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
