// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecrawlerresponse.h"
#include "deletecrawlerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCrawlerResponse
 * \brief The DeleteCrawlerResponse class provides an interace for Glue DeleteCrawler responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteCrawler
 */

/*!
 * Constructs a DeleteCrawlerResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCrawlerResponse::DeleteCrawlerResponse(
        const DeleteCrawlerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteCrawlerResponsePrivate(this), parent)
{
    setRequest(new DeleteCrawlerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCrawlerRequest * DeleteCrawlerResponse::request() const
{
    Q_D(const DeleteCrawlerResponse);
    return static_cast<const DeleteCrawlerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteCrawler \a response.
 */
void DeleteCrawlerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCrawlerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteCrawlerResponsePrivate
 * \brief The DeleteCrawlerResponsePrivate class provides private implementation for DeleteCrawlerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCrawlerResponsePrivate object with public implementation \a q.
 */
DeleteCrawlerResponsePrivate::DeleteCrawlerResponsePrivate(
    DeleteCrawlerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteCrawler response element from \a xml.
 */
void DeleteCrawlerResponsePrivate::parseDeleteCrawlerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCrawlerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
