/*
    Copyright 2013-2019 Paul Colby

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

#include "describecrossaccountaccessroleresponse.h"
#include "describecrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleResponse
 * \brief The DescribeCrossAccountAccessRoleResponse class provides an interace for Inspector DescribeCrossAccountAccessRole responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeCrossAccountAccessRole
 */

/*!
 * Constructs a DescribeCrossAccountAccessRoleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCrossAccountAccessRoleResponse::DescribeCrossAccountAccessRoleResponse(
        const DescribeCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new DescribeCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCrossAccountAccessRoleRequest * DescribeCrossAccountAccessRoleResponse::request() const
{
    Q_D(const DescribeCrossAccountAccessRoleResponse);
    return static_cast<const DescribeCrossAccountAccessRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector DescribeCrossAccountAccessRole \a response.
 */
void DescribeCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCrossAccountAccessRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::DescribeCrossAccountAccessRoleResponsePrivate
 * \brief The DescribeCrossAccountAccessRoleResponsePrivate class provides private implementation for DescribeCrossAccountAccessRoleResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a DescribeCrossAccountAccessRoleResponsePrivate object with public implementation \a q.
 */
DescribeCrossAccountAccessRoleResponsePrivate::DescribeCrossAccountAccessRoleResponsePrivate(
    DescribeCrossAccountAccessRoleResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector DescribeCrossAccountAccessRole response element from \a xml.
 */
void DescribeCrossAccountAccessRoleResponsePrivate::parseDescribeCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCrossAccountAccessRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
