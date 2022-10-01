// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoriginendpointresponse.h"
#include "deleteoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointResponse
 * \brief The DeleteOriginEndpointResponse class provides an interace for MediaPackage DeleteOriginEndpoint responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::deleteOriginEndpoint
 */

/*!
 * Constructs a DeleteOriginEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOriginEndpointResponse::DeleteOriginEndpointResponse(
        const DeleteOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DeleteOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DeleteOriginEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOriginEndpointRequest * DeleteOriginEndpointResponse::request() const
{
    Q_D(const DeleteOriginEndpointResponse);
    return static_cast<const DeleteOriginEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DeleteOriginEndpoint \a response.
 */
void DeleteOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DeleteOriginEndpointResponsePrivate
 * \brief The DeleteOriginEndpointResponsePrivate class provides private implementation for DeleteOriginEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DeleteOriginEndpointResponsePrivate object with public implementation \a q.
 */
DeleteOriginEndpointResponsePrivate::DeleteOriginEndpointResponsePrivate(
    DeleteOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DeleteOriginEndpoint response element from \a xml.
 */
void DeleteOriginEndpointResponsePrivate::parseDeleteOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOriginEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
