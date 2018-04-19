/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(RotateChannelCredentialsResponse);
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
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
