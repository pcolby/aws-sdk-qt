// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrunresponse.h"
#include "getjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunResponse
 * \brief The GetJobRunResponse class provides an interace for Glue GetJobRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobRun
 */

/*!
 * Constructs a GetJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobRunResponse::GetJobRunResponse(
        const GetJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunResponsePrivate(this), parent)
{
    setRequest(new GetJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRunRequest * GetJobRunResponse::request() const
{
    Q_D(const GetJobRunResponse);
    return static_cast<const GetJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobRun \a response.
 */
void GetJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobRunResponsePrivate
 * \brief The GetJobRunResponsePrivate class provides private implementation for GetJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunResponsePrivate object with public implementation \a q.
 */
GetJobRunResponsePrivate::GetJobRunResponsePrivate(
    GetJobRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobRun response element from \a xml.
 */
void GetJobRunResponsePrivate::parseGetJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
