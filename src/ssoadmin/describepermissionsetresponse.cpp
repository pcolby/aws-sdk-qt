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

#include "describepermissionsetresponse.h"
#include "describepermissionsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetResponse
 * \brief The DescribePermissionSetResponse class provides an interace for SSOAdmin DescribePermissionSet responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describePermissionSet
 */

/*!
 * Constructs a DescribePermissionSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePermissionSetResponse::DescribePermissionSetResponse(
        const DescribePermissionSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DescribePermissionSetResponsePrivate(this), parent)
{
    setRequest(new DescribePermissionSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePermissionSetRequest * DescribePermissionSetResponse::request() const
{
    return static_cast<const DescribePermissionSetRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DescribePermissionSet \a response.
 */
void DescribePermissionSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePermissionSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DescribePermissionSetResponsePrivate
 * \brief The DescribePermissionSetResponsePrivate class provides private implementation for DescribePermissionSetResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribePermissionSetResponsePrivate object with public implementation \a q.
 */
DescribePermissionSetResponsePrivate::DescribePermissionSetResponsePrivate(
    DescribePermissionSetResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DescribePermissionSet response element from \a xml.
 */
void DescribePermissionSetResponsePrivate::parseDescribePermissionSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePermissionSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
