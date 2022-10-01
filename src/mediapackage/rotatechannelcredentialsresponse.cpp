// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rotatechannelcredentialsresponse.h"
#include "rotatechannelcredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::RotateChannelCredentialsResponse
 * \brief The RotateChannelCredentialsResponse class provides an interace for MediaPackage RotateChannelCredentials responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::rotateChannelCredentials
 */

/*!
 * Constructs a RotateChannelCredentialsResponse object for \a reply to \a request, with parent \a parent.
 */
RotateChannelCredentialsResponse::RotateChannelCredentialsResponse(
        const RotateChannelCredentialsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new RotateChannelCredentialsResponsePrivate(this), parent)
{
    setRequest(new RotateChannelCredentialsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RotateChannelCredentialsRequest * RotateChannelCredentialsResponse::request() const
{
    Q_D(const RotateChannelCredentialsResponse);
    return static_cast<const RotateChannelCredentialsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage RotateChannelCredentials \a response.
 */
void RotateChannelCredentialsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RotateChannelCredentialsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::RotateChannelCredentialsResponsePrivate
 * \brief The RotateChannelCredentialsResponsePrivate class provides private implementation for RotateChannelCredentialsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a RotateChannelCredentialsResponsePrivate object with public implementation \a q.
 */
RotateChannelCredentialsResponsePrivate::RotateChannelCredentialsResponsePrivate(
    RotateChannelCredentialsResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage RotateChannelCredentials response element from \a xml.
 */
void RotateChannelCredentialsResponsePrivate::parseRotateChannelCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RotateChannelCredentialsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
