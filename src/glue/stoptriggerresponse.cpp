/*
    Copyright 2013-2018 Paul Colby

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

#include "stoptriggerresponse.h"
#include "stoptriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopTriggerResponse
 * \brief The StopTriggerResponse class provides an interace for Glue StopTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::stopTrigger
 */

/*!
 * Constructs a StopTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
StopTriggerResponse::StopTriggerResponse(
        const StopTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StopTriggerResponsePrivate(this), parent)
{
    setRequest(new StopTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopTriggerRequest * StopTriggerResponse::request() const
{
    Q_D(const StopTriggerResponse);
    return static_cast<const StopTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StopTrigger \a response.
 */
void StopTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StopTriggerResponsePrivate
 * \brief The StopTriggerResponsePrivate class provides private implementation for StopTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopTriggerResponsePrivate object with public implementation \a q.
 */
StopTriggerResponsePrivate::StopTriggerResponsePrivate(
    StopTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StopTrigger response element from \a xml.
 */
void StopTriggerResponsePrivate::parseStopTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
