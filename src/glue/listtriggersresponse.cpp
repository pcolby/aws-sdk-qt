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

#include "listtriggersresponse.h"
#include "listtriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListTriggersResponse
 * \brief The ListTriggersResponse class provides an interace for Glue ListTriggers responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listTriggers
 */

/*!
 * Constructs a ListTriggersResponse object for \a reply to \a request, with parent \a parent.
 */
ListTriggersResponse::ListTriggersResponse(
        const ListTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListTriggersResponsePrivate(this), parent)
{
    setRequest(new ListTriggersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTriggersRequest * ListTriggersResponse::request() const
{
    return static_cast<const ListTriggersRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue ListTriggers \a response.
 */
void ListTriggersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTriggersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListTriggersResponsePrivate
 * \brief The ListTriggersResponsePrivate class provides private implementation for ListTriggersResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListTriggersResponsePrivate object with public implementation \a q.
 */
ListTriggersResponsePrivate::ListTriggersResponsePrivate(
    ListTriggersResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListTriggers response element from \a xml.
 */
void ListTriggersResponsePrivate::parseListTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTriggersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
