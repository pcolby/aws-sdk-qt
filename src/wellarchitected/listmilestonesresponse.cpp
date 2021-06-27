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

#include "listmilestonesresponse.h"
#include "listmilestonesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListMilestonesResponse
 * \brief The ListMilestonesResponse class provides an interace for WellArchitected ListMilestones responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>AWS Well-Architected Tool</fullname>
 * 
 *  This is the <i>AWS Well-Architected Tool API Reference</i>. The AWS Well-Architected Tool API provides programmatic
 *  access to the <a href="http://aws.amazon.com/well-architected-tool">AWS Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">AWS Management Console</a>. For information about the AWS
 *  Well-Architected Tool, see the <a href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">AWS
 *  Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listMilestones
 */

/*!
 * Constructs a ListMilestonesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMilestonesResponse::ListMilestonesResponse(
        const ListMilestonesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListMilestonesResponsePrivate(this), parent)
{
    setRequest(new ListMilestonesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMilestonesRequest * ListMilestonesResponse::request() const
{
    return static_cast<const ListMilestonesRequest *>(WellArchitectedResponse::request());
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListMilestones \a response.
 */
void ListMilestonesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMilestonesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListMilestonesResponsePrivate
 * \brief The ListMilestonesResponsePrivate class provides private implementation for ListMilestonesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListMilestonesResponsePrivate object with public implementation \a q.
 */
ListMilestonesResponsePrivate::ListMilestonesResponsePrivate(
    ListMilestonesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListMilestones response element from \a xml.
 */
void ListMilestonesResponsePrivate::parseListMilestonesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMilestonesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
