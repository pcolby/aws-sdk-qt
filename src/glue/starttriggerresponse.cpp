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

#include "starttriggerresponse.h"
#include "starttriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartTriggerResponse
 * \brief The StartTriggerResponse class provides an interace for Glue StartTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startTrigger
 */

/*!
 * Constructs a StartTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
StartTriggerResponse::StartTriggerResponse(
        const StartTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartTriggerResponsePrivate(this), parent)
{
    setRequest(new StartTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTriggerRequest * StartTriggerResponse::request() const
{
    Q_D(const StartTriggerResponse);
    return static_cast<const StartTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue StartTrigger \a response.
 */
void StartTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::StartTriggerResponsePrivate
 * \brief The StartTriggerResponsePrivate class provides private implementation for StartTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartTriggerResponsePrivate object with public implementation \a q.
 */
StartTriggerResponsePrivate::StartTriggerResponsePrivate(
    StartTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue StartTrigger response element from \a xml.
 */
void StartTriggerResponsePrivate::parseStartTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
