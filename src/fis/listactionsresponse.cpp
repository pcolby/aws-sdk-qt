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

#include "listactionsresponse.h"
#include "listactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::ListActionsResponse
 * \brief The ListActionsResponse class provides an interace for Fis ListActions responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::listActions
 */

/*!
 * Constructs a ListActionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListActionsResponse::ListActionsResponse(
        const ListActionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new ListActionsResponsePrivate(this), parent)
{
    setRequest(new ListActionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActionsRequest * ListActionsResponse::request() const
{
    Q_D(const ListActionsResponse);
    return static_cast<const ListActionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis ListActions \a response.
 */
void ListActionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListActionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::ListActionsResponsePrivate
 * \brief The ListActionsResponsePrivate class provides private implementation for ListActionsResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a ListActionsResponsePrivate object with public implementation \a q.
 */
ListActionsResponsePrivate::ListActionsResponsePrivate(
    ListActionsResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis ListActions response element from \a xml.
 */
void ListActionsResponsePrivate::parseListActionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
