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

#include "listshareinvitationsresponse.h"
#include "listshareinvitationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListShareInvitationsResponse
 * \brief The ListShareInvitationsResponse class provides an interace for WellArchitected ListShareInvitations responses.
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
 * \sa WellArchitectedClient::listShareInvitations
 */

/*!
 * Constructs a ListShareInvitationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListShareInvitationsResponse::ListShareInvitationsResponse(
        const ListShareInvitationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListShareInvitationsResponsePrivate(this), parent)
{
    setRequest(new ListShareInvitationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListShareInvitationsRequest * ListShareInvitationsResponse::request() const
{
    Q_D(const ListShareInvitationsResponse);
    return static_cast<const ListShareInvitationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListShareInvitations \a response.
 */
void ListShareInvitationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListShareInvitationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListShareInvitationsResponsePrivate
 * \brief The ListShareInvitationsResponsePrivate class provides private implementation for ListShareInvitationsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListShareInvitationsResponsePrivate object with public implementation \a q.
 */
ListShareInvitationsResponsePrivate::ListShareInvitationsResponsePrivate(
    ListShareInvitationsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListShareInvitations response element from \a xml.
 */
void ListShareInvitationsResponsePrivate::parseListShareInvitationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListShareInvitationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
