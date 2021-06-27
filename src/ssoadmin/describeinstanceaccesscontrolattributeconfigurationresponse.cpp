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

#include "describeinstanceaccesscontrolattributeconfigurationresponse.h"
#include "describeinstanceaccesscontrolattributeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeInstanceAccessControlAttributeConfigurationResponse
 * \brief The DescribeInstanceAccessControlAttributeConfigurationResponse class provides an interace for SSOAdmin DescribeInstanceAccessControlAttributeConfiguration responses.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a DescribeInstanceAccessControlAttributeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeInstanceAccessControlAttributeConfigurationResponse::DescribeInstanceAccessControlAttributeConfigurationResponse(
        const DescribeInstanceAccessControlAttributeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSOAdminResponse(new DescribeInstanceAccessControlAttributeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceAccessControlAttributeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeInstanceAccessControlAttributeConfigurationRequest * DescribeInstanceAccessControlAttributeConfigurationResponse::request() const
{
    return static_cast<const DescribeInstanceAccessControlAttributeConfigurationRequest *>(SSOAdminResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSOAdmin DescribeInstanceAccessControlAttributeConfiguration \a response.
 */
void DescribeInstanceAccessControlAttributeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeInstanceAccessControlAttributeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSOAdmin::DescribeInstanceAccessControlAttributeConfigurationResponsePrivate
 * \brief The DescribeInstanceAccessControlAttributeConfigurationResponsePrivate class provides private implementation for DescribeInstanceAccessControlAttributeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeInstanceAccessControlAttributeConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeInstanceAccessControlAttributeConfigurationResponsePrivate::DescribeInstanceAccessControlAttributeConfigurationResponsePrivate(
    DescribeInstanceAccessControlAttributeConfigurationResponse * const q) : SSOAdminResponsePrivate(q)
{

}

/*!
 * Parses a SSOAdmin DescribeInstanceAccessControlAttributeConfiguration response element from \a xml.
 */
void DescribeInstanceAccessControlAttributeConfigurationResponsePrivate::parseDescribeInstanceAccessControlAttributeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceAccessControlAttributeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSOAdmin
} // namespace QtAws
