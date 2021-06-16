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

#include "createuploadurlresponse.h"
#include "createuploadurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateUploadUrlResponse
 * \brief The CreateUploadUrlResponse class provides an interace for LexModelsV2 CreateUploadUrl responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createUploadUrl
 */

/*!
 * Constructs a CreateUploadUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUploadUrlResponse::CreateUploadUrlResponse(
        const CreateUploadUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateUploadUrlResponsePrivate(this), parent)
{
    setRequest(new CreateUploadUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUploadUrlRequest * CreateUploadUrlResponse::request() const
{
    Q_D(const CreateUploadUrlResponse);
    return static_cast<const CreateUploadUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateUploadUrl \a response.
 */
void CreateUploadUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUploadUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateUploadUrlResponsePrivate
 * \brief The CreateUploadUrlResponsePrivate class provides private implementation for CreateUploadUrlResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateUploadUrlResponsePrivate object with public implementation \a q.
 */
CreateUploadUrlResponsePrivate::CreateUploadUrlResponsePrivate(
    CreateUploadUrlResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateUploadUrl response element from \a xml.
 */
void CreateUploadUrlResponsePrivate::parseCreateUploadUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUploadUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
