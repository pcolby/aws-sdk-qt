// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoreobjectresponse.h"
#include "restoreobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::RestoreObjectResponse
 * \brief The RestoreObjectResponse class provides an interace for S3 RestoreObject responses.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::restoreObject
 */

/*!
 * Constructs a RestoreObjectResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreObjectResponse::RestoreObjectResponse(
        const RestoreObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new RestoreObjectResponsePrivate(this), parent)
{
    setRequest(new RestoreObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreObjectRequest * RestoreObjectResponse::request() const
{
    Q_D(const RestoreObjectResponse);
    return static_cast<const RestoreObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3 RestoreObject \a response.
 */
void RestoreObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3::RestoreObjectResponsePrivate
 * \brief The RestoreObjectResponsePrivate class provides private implementation for RestoreObjectResponse.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a RestoreObjectResponsePrivate object with public implementation \a q.
 */
RestoreObjectResponsePrivate::RestoreObjectResponsePrivate(
    RestoreObjectResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * Parses a S3 RestoreObject response element from \a xml.
 */
void RestoreObjectResponsePrivate::parseRestoreObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreObjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3
} // namespace QtAws
