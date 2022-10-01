// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecampaignresponse.h"
#include "deletecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteCampaignResponse
 * \brief The DeleteCampaignResponse class provides an interace for ConnectCampaigns DeleteCampaign responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteCampaign
 */

/*!
 * Constructs a DeleteCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCampaignResponse::DeleteCampaignResponse(
        const DeleteCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new DeleteCampaignResponsePrivate(this), parent)
{
    setRequest(new DeleteCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCampaignRequest * DeleteCampaignResponse::request() const
{
    Q_D(const DeleteCampaignResponse);
    return static_cast<const DeleteCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns DeleteCampaign \a response.
 */
void DeleteCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteCampaignResponsePrivate
 * \brief The DeleteCampaignResponsePrivate class provides private implementation for DeleteCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteCampaignResponsePrivate object with public implementation \a q.
 */
DeleteCampaignResponsePrivate::DeleteCampaignResponsePrivate(
    DeleteCampaignResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns DeleteCampaign response element from \a xml.
 */
void DeleteCampaignResponsePrivate::parseDeleteCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
