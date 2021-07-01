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

#include "associatelensesresponse.h"
#include "associatelensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::AssociateLensesResponse
 * \brief The AssociateLensesResponse class provides an interace for WellArchitected AssociateLenses responses.
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
 * \sa WellArchitectedClient::associateLenses
 */

/*!
 * Constructs a AssociateLensesResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateLensesResponse::AssociateLensesResponse(
        const AssociateLensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new AssociateLensesResponsePrivate(this), parent)
{
    setRequest(new AssociateLensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateLensesRequest * AssociateLensesResponse::request() const
{
    Q_D(const AssociateLensesResponse);
    return static_cast<const AssociateLensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected AssociateLenses \a response.
 */
void AssociateLensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateLensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::AssociateLensesResponsePrivate
 * \brief The AssociateLensesResponsePrivate class provides private implementation for AssociateLensesResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a AssociateLensesResponsePrivate object with public implementation \a q.
 */
AssociateLensesResponsePrivate::AssociateLensesResponsePrivate(
    AssociateLensesResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected AssociateLenses response element from \a xml.
 */
void AssociateLensesResponsePrivate::parseAssociateLensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateLensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
