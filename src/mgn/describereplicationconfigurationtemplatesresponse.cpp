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

#include "describereplicationconfigurationtemplatesresponse.h"
#include "describereplicationconfigurationtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeReplicationConfigurationTemplatesResponse
 * \brief The DescribeReplicationConfigurationTemplatesResponse class provides an interace for mgn DescribeReplicationConfigurationTemplates responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationConfigurationTemplatesResponse::DescribeReplicationConfigurationTemplatesResponse(
        const DescribeReplicationConfigurationTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DescribeReplicationConfigurationTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationConfigurationTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationConfigurationTemplatesRequest * DescribeReplicationConfigurationTemplatesResponse::request() const
{
    Q_D(const DescribeReplicationConfigurationTemplatesResponse);
    return static_cast<const DescribeReplicationConfigurationTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn DescribeReplicationConfigurationTemplates \a response.
 */
void DescribeReplicationConfigurationTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationConfigurationTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DescribeReplicationConfigurationTemplatesResponsePrivate
 * \brief The DescribeReplicationConfigurationTemplatesResponsePrivate class provides private implementation for DescribeReplicationConfigurationTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesResponsePrivate object with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesResponsePrivate::DescribeReplicationConfigurationTemplatesResponsePrivate(
    DescribeReplicationConfigurationTemplatesResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DescribeReplicationConfigurationTemplates response element from \a xml.
 */
void DescribeReplicationConfigurationTemplatesResponsePrivate::parseDescribeReplicationConfigurationTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationConfigurationTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
