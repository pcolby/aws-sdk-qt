// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
