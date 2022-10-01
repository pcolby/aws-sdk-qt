// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrecommenderconfigurationresponse.h"
#include "createrecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationResponse
 * \brief The CreateRecommenderConfigurationResponse class provides an interace for Pinpoint CreateRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createRecommenderConfiguration
 */

/*!
 * Constructs a CreateRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRecommenderConfigurationResponse::CreateRecommenderConfigurationResponse(
        const CreateRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRecommenderConfigurationRequest * CreateRecommenderConfigurationResponse::request() const
{
    Q_D(const CreateRecommenderConfigurationResponse);
    return static_cast<const CreateRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateRecommenderConfiguration \a response.
 */
void CreateRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateRecommenderConfigurationResponsePrivate
 * \brief The CreateRecommenderConfigurationResponsePrivate class provides private implementation for CreateRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
CreateRecommenderConfigurationResponsePrivate::CreateRecommenderConfigurationResponsePrivate(
    CreateRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateRecommenderConfiguration response element from \a xml.
 */
void CreateRecommenderConfigurationResponsePrivate::parseCreateRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
