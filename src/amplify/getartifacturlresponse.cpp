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

#include "getartifacturlresponse.h"
#include "getartifacturlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetArtifactUrlResponse
 * \brief The GetArtifactUrlResponse class provides an interace for Amplify GetArtifactUrl responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getArtifactUrl
 */

/*!
 * Constructs a GetArtifactUrlResponse object for \a reply to \a request, with parent \a parent.
 */
GetArtifactUrlResponse::GetArtifactUrlResponse(
        const GetArtifactUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetArtifactUrlResponsePrivate(this), parent)
{
    setRequest(new GetArtifactUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetArtifactUrlRequest * GetArtifactUrlResponse::request() const
{
    Q_D(const GetArtifactUrlResponse);
    return static_cast<const GetArtifactUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetArtifactUrl \a response.
 */
void GetArtifactUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetArtifactUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetArtifactUrlResponsePrivate
 * \brief The GetArtifactUrlResponsePrivate class provides private implementation for GetArtifactUrlResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetArtifactUrlResponsePrivate object with public implementation \a q.
 */
GetArtifactUrlResponsePrivate::GetArtifactUrlResponsePrivate(
    GetArtifactUrlResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetArtifactUrl response element from \a xml.
 */
void GetArtifactUrlResponsePrivate::parseGetArtifactUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetArtifactUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
