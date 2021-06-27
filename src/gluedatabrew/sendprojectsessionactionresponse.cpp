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

#include "sendprojectsessionactionresponse.h"
#include "sendprojectsessionactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::SendProjectSessionActionResponse
 * \brief The SendProjectSessionActionResponse class provides an interace for GlueDataBrew SendProjectSessionAction responses.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::sendProjectSessionAction
 */

/*!
 * Constructs a SendProjectSessionActionResponse object for \a reply to \a request, with parent \a parent.
 */
SendProjectSessionActionResponse::SendProjectSessionActionResponse(
        const SendProjectSessionActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueDataBrewResponse(new SendProjectSessionActionResponsePrivate(this), parent)
{
    setRequest(new SendProjectSessionActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendProjectSessionActionRequest * SendProjectSessionActionResponse::request() const
{
    return static_cast<const SendProjectSessionActionRequest *>(GlueDataBrewResponse::request());
}

/*!
 * \reimp
 * Parses a successful GlueDataBrew SendProjectSessionAction \a response.
 */
void SendProjectSessionActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendProjectSessionActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GlueDataBrew::SendProjectSessionActionResponsePrivate
 * \brief The SendProjectSessionActionResponsePrivate class provides private implementation for SendProjectSessionActionResponse.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a SendProjectSessionActionResponsePrivate object with public implementation \a q.
 */
SendProjectSessionActionResponsePrivate::SendProjectSessionActionResponsePrivate(
    SendProjectSessionActionResponse * const q) : GlueDataBrewResponsePrivate(q)
{

}

/*!
 * Parses a GlueDataBrew SendProjectSessionAction response element from \a xml.
 */
void SendProjectSessionActionResponsePrivate::parseSendProjectSessionActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendProjectSessionActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GlueDataBrew
} // namespace QtAws
