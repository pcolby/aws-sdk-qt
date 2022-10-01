/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
