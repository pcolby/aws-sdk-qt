// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectinstanceconfigresponse.h"
#include "deleteconnectinstanceconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigResponse
 * \brief The DeleteConnectInstanceConfigResponse class provides an interace for ConnectCampaigns DeleteConnectInstanceConfig responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteConnectInstanceConfig
 */

/*!
 * Constructs a DeleteConnectInstanceConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectInstanceConfigResponse::DeleteConnectInstanceConfigResponse(
        const DeleteConnectInstanceConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new DeleteConnectInstanceConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectInstanceConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectInstanceConfigRequest * DeleteConnectInstanceConfigResponse::request() const
{
    Q_D(const DeleteConnectInstanceConfigResponse);
    return static_cast<const DeleteConnectInstanceConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns DeleteConnectInstanceConfig \a response.
 */
void DeleteConnectInstanceConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectInstanceConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigResponsePrivate
 * \brief The DeleteConnectInstanceConfigResponsePrivate class provides private implementation for DeleteConnectInstanceConfigResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteConnectInstanceConfigResponsePrivate object with public implementation \a q.
 */
DeleteConnectInstanceConfigResponsePrivate::DeleteConnectInstanceConfigResponsePrivate(
    DeleteConnectInstanceConfigResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns DeleteConnectInstanceConfig response element from \a xml.
 */
void DeleteConnectInstanceConfigResponsePrivate::parseDeleteConnectInstanceConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectInstanceConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
