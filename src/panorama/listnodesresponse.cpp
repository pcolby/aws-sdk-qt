// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnodesresponse.h"
#include "listnodesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListNodesResponse
 * \brief The ListNodesResponse class provides an interace for Panorama ListNodes responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listNodes
 */

/*!
 * Constructs a ListNodesResponse object for \a reply to \a request, with parent \a parent.
 */
ListNodesResponse::ListNodesResponse(
        const ListNodesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListNodesResponsePrivate(this), parent)
{
    setRequest(new ListNodesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNodesRequest * ListNodesResponse::request() const
{
    Q_D(const ListNodesResponse);
    return static_cast<const ListNodesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListNodes \a response.
 */
void ListNodesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNodesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListNodesResponsePrivate
 * \brief The ListNodesResponsePrivate class provides private implementation for ListNodesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListNodesResponsePrivate object with public implementation \a q.
 */
ListNodesResponsePrivate::ListNodesResponsePrivate(
    ListNodesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListNodes response element from \a xml.
 */
void ListNodesResponsePrivate::parseListNodesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNodesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
