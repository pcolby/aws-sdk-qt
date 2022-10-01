// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcampaignresponse.h"
#include "createcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateCampaignResponse
 * \brief The CreateCampaignResponse class provides an interace for Pinpoint CreateCampaign responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createCampaign
 */

/*!
 * Constructs a CreateCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCampaignResponse::CreateCampaignResponse(
        const CreateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateCampaignResponsePrivate(this), parent)
{
    setRequest(new CreateCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCampaignRequest * CreateCampaignResponse::request() const
{
    Q_D(const CreateCampaignResponse);
    return static_cast<const CreateCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateCampaign \a response.
 */
void CreateCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateCampaignResponsePrivate
 * \brief The CreateCampaignResponsePrivate class provides private implementation for CreateCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateCampaignResponsePrivate object with public implementation \a q.
 */
CreateCampaignResponsePrivate::CreateCampaignResponsePrivate(
    CreateCampaignResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateCampaign response element from \a xml.
 */
void CreateCampaignResponsePrivate::parseCreateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
