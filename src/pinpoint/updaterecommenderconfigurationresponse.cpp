// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterecommenderconfigurationresponse.h"
#include "updaterecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationResponse
 * \brief The UpdateRecommenderConfigurationResponse class provides an interace for Pinpoint UpdateRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateRecommenderConfiguration
 */

/*!
 * Constructs a UpdateRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRecommenderConfigurationResponse::UpdateRecommenderConfigurationResponse(
        const UpdateRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRecommenderConfigurationRequest * UpdateRecommenderConfigurationResponse::request() const
{
    Q_D(const UpdateRecommenderConfigurationResponse);
    return static_cast<const UpdateRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateRecommenderConfiguration \a response.
 */
void UpdateRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateRecommenderConfigurationResponsePrivate
 * \brief The UpdateRecommenderConfigurationResponsePrivate class provides private implementation for UpdateRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateRecommenderConfigurationResponsePrivate::UpdateRecommenderConfigurationResponsePrivate(
    UpdateRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateRecommenderConfiguration response element from \a xml.
 */
void UpdateRecommenderConfigurationResponsePrivate::parseUpdateRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
