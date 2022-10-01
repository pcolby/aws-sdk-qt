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

#include "describeorganizationconfigurationresponse.h"
#include "describeorganizationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DescribeOrganizationConfigurationResponse
 * \brief The DescribeOrganizationConfigurationResponse class provides an interace for Inspector2 DescribeOrganizationConfiguration responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::describeOrganizationConfiguration
 */

/*!
 * Constructs a DescribeOrganizationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOrganizationConfigurationResponse::DescribeOrganizationConfigurationResponse(
        const DescribeOrganizationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new DescribeOrganizationConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeOrganizationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOrganizationConfigurationRequest * DescribeOrganizationConfigurationResponse::request() const
{
    Q_D(const DescribeOrganizationConfigurationResponse);
    return static_cast<const DescribeOrganizationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 DescribeOrganizationConfiguration \a response.
 */
void DescribeOrganizationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOrganizationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::DescribeOrganizationConfigurationResponsePrivate
 * \brief The DescribeOrganizationConfigurationResponsePrivate class provides private implementation for DescribeOrganizationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DescribeOrganizationConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeOrganizationConfigurationResponsePrivate::DescribeOrganizationConfigurationResponsePrivate(
    DescribeOrganizationConfigurationResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 DescribeOrganizationConfiguration response element from \a xml.
 */
void DescribeOrganizationConfigurationResponsePrivate::parseDescribeOrganizationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrganizationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
