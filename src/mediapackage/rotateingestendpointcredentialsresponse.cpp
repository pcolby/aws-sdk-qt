// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rotateingestendpointcredentialsresponse.h"
#include "rotateingestendpointcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsResponse
 * \brief The RotateIngestEndpointCredentialsResponse class provides an interace for MediaPackage RotateIngestEndpointCredentials responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::rotateIngestEndpointCredentials
 */

/*!
 * Constructs a RotateIngestEndpointCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
RotateIngestEndpointCredentialsResponse::RotateIngestEndpointCredentialsResponse(
        const RotateIngestEndpointCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new RotateIngestEndpointCredentialsResponsePrivate(this), parent)
{
    setRequest(new RotateIngestEndpointCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RotateIngestEndpointCredentialsRequest * RotateIngestEndpointCredentialsResponse::request() const
{
    Q_D(const RotateIngestEndpointCredentialsResponse);
    return static_cast<const RotateIngestEndpointCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage RotateIngestEndpointCredentials \a response.
 */
void RotateIngestEndpointCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RotateIngestEndpointCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::RotateIngestEndpointCredentialsResponsePrivate
 * \brief The RotateIngestEndpointCredentialsResponsePrivate class provides private implementation for RotateIngestEndpointCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a RotateIngestEndpointCredentialsResponsePrivate object with public implementation \a q.
 */
RotateIngestEndpointCredentialsResponsePrivate::RotateIngestEndpointCredentialsResponsePrivate(
    RotateIngestEndpointCredentialsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage RotateIngestEndpointCredentials response element from \a xml.
 */
void RotateIngestEndpointCredentialsResponsePrivate::parseRotateIngestEndpointCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateIngestEndpointCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
