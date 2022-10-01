// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmltaskrunresponse.h"
#include "getmltaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunResponse
 * \brief The GetMLTaskRunResponse class provides an interace for Glue GetMLTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTaskRun
 */

/*!
 * Constructs a GetMLTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTaskRunResponse::GetMLTaskRunResponse(
        const GetMLTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTaskRunResponsePrivate(this), parent)
{
    setRequest(new GetMLTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTaskRunRequest * GetMLTaskRunResponse::request() const
{
    Q_D(const GetMLTaskRunResponse);
    return static_cast<const GetMLTaskRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTaskRun \a response.
 */
void GetMLTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTaskRunResponsePrivate
 * \brief The GetMLTaskRunResponsePrivate class provides private implementation for GetMLTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunResponsePrivate object with public implementation \a q.
 */
GetMLTaskRunResponsePrivate::GetMLTaskRunResponsePrivate(
    GetMLTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTaskRun response element from \a xml.
 */
void GetMLTaskRunResponsePrivate::parseGetMLTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
