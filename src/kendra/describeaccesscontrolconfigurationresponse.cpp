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

#include "describeaccesscontrolconfigurationresponse.h"
#include "describeaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationResponse
 * \brief The DescribeAccessControlConfigurationResponse class provides an interace for Kendra DescribeAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeAccessControlConfiguration
 */

/*!
 * Constructs a DescribeAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccessControlConfigurationResponse::DescribeAccessControlConfigurationResponse(
        const DescribeAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccessControlConfigurationRequest * DescribeAccessControlConfigurationResponse::request() const
{
    Q_D(const DescribeAccessControlConfigurationResponse);
    return static_cast<const DescribeAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeAccessControlConfiguration \a response.
 */
void DescribeAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationResponsePrivate
 * \brief The DescribeAccessControlConfigurationResponsePrivate class provides private implementation for DescribeAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeAccessControlConfigurationResponsePrivate::DescribeAccessControlConfigurationResponsePrivate(
    DescribeAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeAccessControlConfiguration response element from \a xml.
 */
void DescribeAccessControlConfigurationResponsePrivate::parseDescribeAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
