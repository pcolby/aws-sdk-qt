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

#include "describeapplicationstateresponse.h"
#include "describeapplicationstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DescribeApplicationStateResponse
 * \brief The DescribeApplicationStateResponse class provides an interace for MigrationHub DescribeApplicationState responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::describeApplicationState
 */

/*!
 * Constructs a DescribeApplicationStateResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationStateResponse::DescribeApplicationStateResponse(
        const DescribeApplicationStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DescribeApplicationStateResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationStateRequest * DescribeApplicationStateResponse::request() const
{
    Q_D(const DescribeApplicationStateResponse);
    return static_cast<const DescribeApplicationStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub DescribeApplicationState \a response.
 */
void DescribeApplicationStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::DescribeApplicationStateResponsePrivate
 * \brief The DescribeApplicationStateResponsePrivate class provides private implementation for DescribeApplicationStateResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DescribeApplicationStateResponsePrivate object with public implementation \a q.
 */
DescribeApplicationStateResponsePrivate::DescribeApplicationStateResponsePrivate(
    DescribeApplicationStateResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub DescribeApplicationState response element from \a xml.
 */
void DescribeApplicationStateResponsePrivate::parseDescribeApplicationStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
