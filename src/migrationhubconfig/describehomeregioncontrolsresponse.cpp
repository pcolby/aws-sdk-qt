// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehomeregioncontrolsresponse.h"
#include "describehomeregioncontrolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::DescribeHomeRegionControlsResponse
 * \brief The DescribeHomeRegionControlsResponse class provides an interace for MigrationHubConfig DescribeHomeRegionControls responses.
 *
 * \inmodule QtAwsMigrationHubConfig
 *
 *  The AWS Migration Hub home region APIs are available specifically for working with your Migration Hub home region. You
 *  can use these APIs to determine a home region, as well as to create and work with controls that describe the home
 * 
 *  region> <ul> <li>
 * 
 *  You must make API calls for write actions (create, notify, associate, disassociate, import, or put) while in your home
 *  region, or a <code>HomeRegionNotSetException</code> error is
 * 
 *  returned> </li> <li>
 * 
 *  API calls for read actions (list, describe, stop, and delete) are permitted outside of your home
 * 
 *  region> </li> <li>
 * 
 *  If you call a write API outside the home region, an <code>InvalidInputException</code> is
 * 
 *  returned> </li> <li>
 * 
 *  You can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub home
 * 
 *  region> </li> </ul>
 * 
 *  For specific API usage, see the sections that follow in this AWS Migration Hub Home Region API reference.
 *
 * \sa MigrationHubConfigClient::describeHomeRegionControls
 */

/*!
 * Constructs a DescribeHomeRegionControlsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHomeRegionControlsResponse::DescribeHomeRegionControlsResponse(
        const DescribeHomeRegionControlsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubConfigResponse(new DescribeHomeRegionControlsResponsePrivate(this), parent)
{
    setRequest(new DescribeHomeRegionControlsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHomeRegionControlsRequest * DescribeHomeRegionControlsResponse::request() const
{
    Q_D(const DescribeHomeRegionControlsResponse);
    return static_cast<const DescribeHomeRegionControlsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubConfig DescribeHomeRegionControls \a response.
 */
void DescribeHomeRegionControlsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHomeRegionControlsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubConfig::DescribeHomeRegionControlsResponsePrivate
 * \brief The DescribeHomeRegionControlsResponsePrivate class provides private implementation for DescribeHomeRegionControlsResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a DescribeHomeRegionControlsResponsePrivate object with public implementation \a q.
 */
DescribeHomeRegionControlsResponsePrivate::DescribeHomeRegionControlsResponsePrivate(
    DescribeHomeRegionControlsResponse * const q) : MigrationHubConfigResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubConfig DescribeHomeRegionControls response element from \a xml.
 */
void DescribeHomeRegionControlsResponsePrivate::parseDescribeHomeRegionControlsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHomeRegionControlsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubConfig
} // namespace QtAws
