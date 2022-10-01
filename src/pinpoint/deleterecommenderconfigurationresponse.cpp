// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommenderconfigurationresponse.h"
#include "deleterecommenderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationResponse
 * \brief The DeleteRecommenderConfigurationResponse class provides an interace for Pinpoint DeleteRecommenderConfiguration responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteRecommenderConfiguration
 */

/*!
 * Constructs a DeleteRecommenderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRecommenderConfigurationResponse::DeleteRecommenderConfigurationResponse(
        const DeleteRecommenderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteRecommenderConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteRecommenderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRecommenderConfigurationRequest * DeleteRecommenderConfigurationResponse::request() const
{
    Q_D(const DeleteRecommenderConfigurationResponse);
    return static_cast<const DeleteRecommenderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteRecommenderConfiguration \a response.
 */
void DeleteRecommenderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRecommenderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteRecommenderConfigurationResponsePrivate
 * \brief The DeleteRecommenderConfigurationResponsePrivate class provides private implementation for DeleteRecommenderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteRecommenderConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteRecommenderConfigurationResponsePrivate::DeleteRecommenderConfigurationResponsePrivate(
    DeleteRecommenderConfigurationResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteRecommenderConfiguration response element from \a xml.
 */
void DeleteRecommenderConfigurationResponsePrivate::parseDeleteRecommenderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRecommenderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
