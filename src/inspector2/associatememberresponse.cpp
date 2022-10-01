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

#include "associatememberresponse.h"
#include "associatememberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::AssociateMemberResponse
 * \brief The AssociateMemberResponse class provides an interace for Inspector2 AssociateMember responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::associateMember
 */

/*!
 * Constructs a AssociateMemberResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateMemberResponse::AssociateMemberResponse(
        const AssociateMemberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new AssociateMemberResponsePrivate(this), parent)
{
    setRequest(new AssociateMemberRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateMemberRequest * AssociateMemberResponse::request() const
{
    Q_D(const AssociateMemberResponse);
    return static_cast<const AssociateMemberRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 AssociateMember \a response.
 */
void AssociateMemberResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateMemberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::AssociateMemberResponsePrivate
 * \brief The AssociateMemberResponsePrivate class provides private implementation for AssociateMemberResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a AssociateMemberResponsePrivate object with public implementation \a q.
 */
AssociateMemberResponsePrivate::AssociateMemberResponsePrivate(
    AssociateMemberResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 AssociateMember response element from \a xml.
 */
void AssociateMemberResponsePrivate::parseAssociateMemberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateMemberResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
