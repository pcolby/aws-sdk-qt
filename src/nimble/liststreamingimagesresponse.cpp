// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingimagesresponse.h"
#include "liststreamingimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStreamingImagesResponse
 * \brief The ListStreamingImagesResponse class provides an interace for Nimble ListStreamingImages responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listStreamingImages
 */

/*!
 * Constructs a ListStreamingImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingImagesResponse::ListStreamingImagesResponse(
        const ListStreamingImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListStreamingImagesResponsePrivate(this), parent)
{
    setRequest(new ListStreamingImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingImagesRequest * ListStreamingImagesResponse::request() const
{
    Q_D(const ListStreamingImagesResponse);
    return static_cast<const ListStreamingImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListStreamingImages \a response.
 */
void ListStreamingImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListStreamingImagesResponsePrivate
 * \brief The ListStreamingImagesResponsePrivate class provides private implementation for ListStreamingImagesResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStreamingImagesResponsePrivate object with public implementation \a q.
 */
ListStreamingImagesResponsePrivate::ListStreamingImagesResponsePrivate(
    ListStreamingImagesResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListStreamingImages response element from \a xml.
 */
void ListStreamingImagesResponsePrivate::parseListStreamingImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
