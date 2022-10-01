// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createassetresponse.h"
#include "createassetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreateAssetResponse
 * \brief The CreateAssetResponse class provides an interace for MediaPackageVod CreateAsset responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createAsset
 */

/*!
 * Constructs a CreateAssetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAssetResponse::CreateAssetResponse(
        const CreateAssetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new CreateAssetResponsePrivate(this), parent)
{
    setRequest(new CreateAssetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAssetRequest * CreateAssetResponse::request() const
{
    Q_D(const CreateAssetResponse);
    return static_cast<const CreateAssetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod CreateAsset \a response.
 */
void CreateAssetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAssetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::CreateAssetResponsePrivate
 * \brief The CreateAssetResponsePrivate class provides private implementation for CreateAssetResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreateAssetResponsePrivate object with public implementation \a q.
 */
CreateAssetResponsePrivate::CreateAssetResponsePrivate(
    CreateAssetResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod CreateAsset response element from \a xml.
 */
void CreateAssetResponsePrivate::parseCreateAssetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
