/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gettriggerresponse.h"
#include "gettriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggerResponse
 * \brief The GetTriggerResponse class provides an interace for Glue GetTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTrigger
 */

/*!
 * Constructs a GetTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
GetTriggerResponse::GetTriggerResponse(
        const GetTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTriggerResponsePrivate(this), parent)
{
    setRequest(new GetTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTriggerRequest * GetTriggerResponse::request() const
{
    Q_D(const GetTriggerResponse);
    return static_cast<const GetTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTrigger \a response.
 */
void GetTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTriggerResponsePrivate
 * \brief The GetTriggerResponsePrivate class provides private implementation for GetTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggerResponsePrivate object with public implementation \a q.
 */
GetTriggerResponsePrivate::GetTriggerResponsePrivate(
    GetTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTrigger response element from \a xml.
 */
void GetTriggerResponsePrivate::parseGetTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
