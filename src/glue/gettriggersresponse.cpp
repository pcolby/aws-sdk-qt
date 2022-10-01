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

#include "gettriggersresponse.h"
#include "gettriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTriggersResponse
 * \brief The GetTriggersResponse class provides an interace for Glue GetTriggers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getTriggers
 */

/*!
 * Constructs a GetTriggersResponse object for \a reply to \a request, with parent \a parent.
 */
GetTriggersResponse::GetTriggersResponse(
        const GetTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetTriggersResponsePrivate(this), parent)
{
    setRequest(new GetTriggersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTriggersRequest * GetTriggersResponse::request() const
{
    Q_D(const GetTriggersResponse);
    return static_cast<const GetTriggersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetTriggers \a response.
 */
void GetTriggersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetTriggersResponsePrivate
 * \brief The GetTriggersResponsePrivate class provides private implementation for GetTriggersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTriggersResponsePrivate object with public implementation \a q.
 */
GetTriggersResponsePrivate::GetTriggersResponsePrivate(
    GetTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetTriggers response element from \a xml.
 */
void GetTriggersResponsePrivate::parseGetTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTriggersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
