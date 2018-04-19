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

#include "getcontentmoderationresponse.h"
#include "getcontentmoderationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetContentModerationResponse
 * \brief The GetContentModerationResponse class provides an interace for Rekognition GetContentModeration responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getContentModeration
 */

/*!
 * Constructs a GetContentModerationResponse object for \a reply to \a request, with parent \a parent.
 */
GetContentModerationResponse::GetContentModerationResponse(
        const GetContentModerationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetContentModerationResponsePrivate(this), parent)
{
    setRequest(new GetContentModerationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContentModerationRequest * GetContentModerationResponse::request() const
{
    Q_D(const GetContentModerationResponse);
    return static_cast<const GetContentModerationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetContentModeration \a response.
 */
void GetContentModerationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetContentModerationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetContentModerationResponsePrivate
 * \brief The GetContentModerationResponsePrivate class provides private implementation for GetContentModerationResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetContentModerationResponsePrivate object with public implementation \a q.
 */
GetContentModerationResponsePrivate::GetContentModerationResponsePrivate(
    GetContentModerationResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetContentModeration response element from \a xml.
 */
void GetContentModerationResponsePrivate::parseGetContentModerationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContentModerationResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
