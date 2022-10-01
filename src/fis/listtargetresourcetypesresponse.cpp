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

#include "listtargetresourcetypesresponse.h"
#include "listtargetresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListTargetResourceTypesResponse
 * \brief The ListTargetResourceTypesResponse class provides an interace for Fis ListTargetResourceTypes responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listTargetResourceTypes
 */

/*!
 * Constructs a ListTargetResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTargetResourceTypesResponse::ListTargetResourceTypesResponse(
        const ListTargetResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListTargetResourceTypesResponsePrivate(this), parent)
{
    setRequest(new ListTargetResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTargetResourceTypesRequest * ListTargetResourceTypesResponse::request() const
{
    Q_D(const ListTargetResourceTypesResponse);
    return static_cast<const ListTargetResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis ListTargetResourceTypes \a response.
 */
void ListTargetResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTargetResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::ListTargetResourceTypesResponsePrivate
 * \brief The ListTargetResourceTypesResponsePrivate class provides private implementation for ListTargetResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListTargetResourceTypesResponsePrivate object with public implementation \a q.
 */
ListTargetResourceTypesResponsePrivate::ListTargetResourceTypesResponsePrivate(
    ListTargetResourceTypesResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis ListTargetResourceTypes response element from \a xml.
 */
void ListTargetResourceTypesResponsePrivate::parseListTargetResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
