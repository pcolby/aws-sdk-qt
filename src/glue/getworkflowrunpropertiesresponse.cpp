// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowrunpropertiesresponse.h"
#include "getworkflowrunpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesResponse
 * \brief The GetWorkflowRunPropertiesResponse class provides an interace for Glue GetWorkflowRunProperties responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getWorkflowRunProperties
 */

/*!
 * Constructs a GetWorkflowRunPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowRunPropertiesResponse::GetWorkflowRunPropertiesResponse(
        const GetWorkflowRunPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetWorkflowRunPropertiesResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRunPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRunPropertiesRequest * GetWorkflowRunPropertiesResponse::request() const
{
    Q_D(const GetWorkflowRunPropertiesResponse);
    return static_cast<const GetWorkflowRunPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetWorkflowRunProperties \a response.
 */
void GetWorkflowRunPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowRunPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesResponsePrivate
 * \brief The GetWorkflowRunPropertiesResponsePrivate class provides private implementation for GetWorkflowRunPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunPropertiesResponsePrivate object with public implementation \a q.
 */
GetWorkflowRunPropertiesResponsePrivate::GetWorkflowRunPropertiesResponsePrivate(
    GetWorkflowRunPropertiesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetWorkflowRunProperties response element from \a xml.
 */
void GetWorkflowRunPropertiesResponsePrivate::parseGetWorkflowRunPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowRunPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
