// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethomeregionresponse.h"
#include "gethomeregionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubConfig {

/*!
 * \class QtAws::MigrationHubConfig::GetHomeRegionResponse
 * \brief The GetHomeRegionResponse class provides an interace for MigrationHubConfig GetHomeRegion responses.
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
 * \sa MigrationHubConfigClient::getHomeRegion
 */

/*!
 * Constructs a GetHomeRegionResponse object for \a reply to \a request, with parent \a parent.
 */
GetHomeRegionResponse::GetHomeRegionResponse(
        const GetHomeRegionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubConfigResponse(new GetHomeRegionResponsePrivate(this), parent)
{
    setRequest(new GetHomeRegionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetHomeRegionRequest * GetHomeRegionResponse::request() const
{
    Q_D(const GetHomeRegionResponse);
    return static_cast<const GetHomeRegionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubConfig GetHomeRegion \a response.
 */
void GetHomeRegionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetHomeRegionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubConfig::GetHomeRegionResponsePrivate
 * \brief The GetHomeRegionResponsePrivate class provides private implementation for GetHomeRegionResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubConfig
 */

/*!
 * Constructs a GetHomeRegionResponsePrivate object with public implementation \a q.
 */
GetHomeRegionResponsePrivate::GetHomeRegionResponsePrivate(
    GetHomeRegionResponse * const q) : MigrationHubConfigResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubConfig GetHomeRegion response element from \a xml.
 */
void GetHomeRegionResponsePrivate::parseGetHomeRegionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHomeRegionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubConfig
} // namespace QtAws
