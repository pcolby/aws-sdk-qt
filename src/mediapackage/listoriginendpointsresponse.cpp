// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoriginendpointsresponse.h"
#include "listoriginendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsResponse
 * \brief The ListOriginEndpointsResponse class provides an interace for MediaPackage ListOriginEndpoints responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listOriginEndpoints
 */

/*!
 * Constructs a ListOriginEndpointsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOriginEndpointsResponse::ListOriginEndpointsResponse(
        const ListOriginEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new ListOriginEndpointsResponsePrivate(this), parent)
{
    setRequest(new ListOriginEndpointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOriginEndpointsRequest * ListOriginEndpointsResponse::request() const
{
    Q_D(const ListOriginEndpointsResponse);
    return static_cast<const ListOriginEndpointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage ListOriginEndpoints \a response.
 */
void ListOriginEndpointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOriginEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::ListOriginEndpointsResponsePrivate
 * \brief The ListOriginEndpointsResponsePrivate class provides private implementation for ListOriginEndpointsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListOriginEndpointsResponsePrivate object with public implementation \a q.
 */
ListOriginEndpointsResponsePrivate::ListOriginEndpointsResponsePrivate(
    ListOriginEndpointsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage ListOriginEndpoints response element from \a xml.
 */
void ListOriginEndpointsResponsePrivate::parseListOriginEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOriginEndpointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
