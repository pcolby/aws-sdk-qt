/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describesecurityconfigurationresponse.h"
#include "describesecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeSecurityConfigurationResponse
 * \brief The DescribeSecurityConfigurationResponse class provides an interace for EMR DescribeSecurityConfiguration responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::describeSecurityConfiguration
 */

/*!
 * Constructs a DescribeSecurityConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSecurityConfigurationResponse::DescribeSecurityConfigurationResponse(
        const DescribeSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DescribeSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeSecurityConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSecurityConfigurationRequest * DescribeSecurityConfigurationResponse::request() const
{
    Q_D(const DescribeSecurityConfigurationResponse);
    return static_cast<const DescribeSecurityConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR DescribeSecurityConfiguration \a response.
 */
void DescribeSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DescribeSecurityConfigurationResponsePrivate
 * \brief The DescribeSecurityConfigurationResponsePrivate class provides private implementation for DescribeSecurityConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeSecurityConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeSecurityConfigurationResponsePrivate::DescribeSecurityConfigurationResponsePrivate(
    DescribeSecurityConfigurationResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR DescribeSecurityConfiguration response element from \a xml.
 */
void DescribeSecurityConfigurationResponsePrivate::parseDescribeSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSecurityConfigurationResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
