// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
