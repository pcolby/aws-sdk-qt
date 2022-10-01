// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "writegetobjectresponseresponse.h"
#include "writegetobjectresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::WriteGetObjectResponseResponse
 * \brief The WriteGetObjectResponseResponse class provides an interace for S3 WriteGetObjectResponse responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::writeGetObjectResponse
 */

/*!
 * Constructs a WriteGetObjectResponseResponse object for \a reply to \a request, with parent \a parent.
 */
WriteGetObjectResponseResponse::WriteGetObjectResponseResponse(
        const WriteGetObjectResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new WriteGetObjectResponseResponsePrivate(this), parent)
{
    setRequest(new WriteGetObjectResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const WriteGetObjectResponseRequest * WriteGetObjectResponseResponse::request() const
{
    Q_D(const WriteGetObjectResponseResponse);
    return static_cast<const WriteGetObjectResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 WriteGetObjectResponse \a response.
 */
void WriteGetObjectResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(WriteGetObjectResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::WriteGetObjectResponseResponsePrivate
 * \brief The WriteGetObjectResponseResponsePrivate class provides private implementation for WriteGetObjectResponseResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a WriteGetObjectResponseResponsePrivate object with public implementation \a q.
 */
WriteGetObjectResponseResponsePrivate::WriteGetObjectResponseResponsePrivate(
    WriteGetObjectResponseResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 WriteGetObjectResponse response element from \a xml.
 */
void WriteGetObjectResponseResponsePrivate::parseWriteGetObjectResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("WriteGetObjectResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
