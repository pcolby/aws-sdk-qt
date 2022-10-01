// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepipelinesresponse.h"
#include "listimagepipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePipelinesResponse
 * \brief The ListImagePipelinesResponse class provides an interace for ImageBuilder ListImagePipelines responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePipelines
 */

/*!
 * Constructs a ListImagePipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePipelinesResponse::ListImagePipelinesResponse(
        const ListImagePipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListImagePipelinesResponsePrivate(this), parent)
{
    setRequest(new ListImagePipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePipelinesRequest * ListImagePipelinesResponse::request() const
{
    Q_D(const ListImagePipelinesResponse);
    return static_cast<const ListImagePipelinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListImagePipelines \a response.
 */
void ListImagePipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListImagePipelinesResponsePrivate
 * \brief The ListImagePipelinesResponsePrivate class provides private implementation for ListImagePipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePipelinesResponsePrivate object with public implementation \a q.
 */
ListImagePipelinesResponsePrivate::ListImagePipelinesResponsePrivate(
    ListImagePipelinesResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListImagePipelines response element from \a xml.
 */
void ListImagePipelinesResponsePrivate::parseListImagePipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
