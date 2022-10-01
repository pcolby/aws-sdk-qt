// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecampaignresponse.h"
#include "deletecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteCampaignResponse
 * \brief The DeleteCampaignResponse class provides an interace for Personalize DeleteCampaign responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteCampaign
 */

/*!
 * Constructs a DeleteCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCampaignResponse::DeleteCampaignResponse(
        const DeleteCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteCampaignResponsePrivate(this), parent)
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
 * Parses a successful Personalize DeleteCampaign \a response.
 */
void DeleteCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteCampaignResponsePrivate
 * \brief The DeleteCampaignResponsePrivate class provides private implementation for DeleteCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteCampaignResponsePrivate object with public implementation \a q.
 */
DeleteCampaignResponsePrivate::DeleteCampaignResponsePrivate(
    DeleteCampaignResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteCampaign response element from \a xml.
 */
void DeleteCampaignResponsePrivate::parseDeleteCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
