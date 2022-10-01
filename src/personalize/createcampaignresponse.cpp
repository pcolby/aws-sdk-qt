// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcampaignresponse.h"
#include "createcampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateCampaignResponse
 * \brief The CreateCampaignResponse class provides an interace for Personalize CreateCampaign responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createCampaign
 */

/*!
 * Constructs a CreateCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCampaignResponse::CreateCampaignResponse(
        const CreateCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateCampaignResponsePrivate(this), parent)
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
 * Parses a successful Personalize CreateCampaign \a response.
 */
void CreateCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateCampaignResponsePrivate
 * \brief The CreateCampaignResponsePrivate class provides private implementation for CreateCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateCampaignResponsePrivate object with public implementation \a q.
 */
CreateCampaignResponsePrivate::CreateCampaignResponsePrivate(
    CreateCampaignResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateCampaign response element from \a xml.
 */
void CreateCampaignResponsePrivate::parseCreateCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
