// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiteaddressresponse.h"
#include "updatesiteaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteAddressResponse
 * \brief The UpdateSiteAddressResponse class provides an interace for Outposts UpdateSiteAddress responses.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSiteAddress
 */

/*!
 * Constructs a UpdateSiteAddressResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSiteAddressResponse::UpdateSiteAddressResponse(
        const UpdateSiteAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OutpostsResponse(new UpdateSiteAddressResponsePrivate(this), parent)
{
    setRequest(new UpdateSiteAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSiteAddressRequest * UpdateSiteAddressResponse::request() const
{
    Q_D(const UpdateSiteAddressResponse);
    return static_cast<const UpdateSiteAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Outposts UpdateSiteAddress \a response.
 */
void UpdateSiteAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSiteAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Outposts::UpdateSiteAddressResponsePrivate
 * \brief The UpdateSiteAddressResponsePrivate class provides private implementation for UpdateSiteAddressResponse.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteAddressResponsePrivate object with public implementation \a q.
 */
UpdateSiteAddressResponsePrivate::UpdateSiteAddressResponsePrivate(
    UpdateSiteAddressResponse * const q) : OutpostsResponsePrivate(q)
{

}

/*!
 * Parses a Outposts UpdateSiteAddress response element from \a xml.
 */
void UpdateSiteAddressResponsePrivate::parseUpdateSiteAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSiteAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Outposts
} // namespace QtAws
