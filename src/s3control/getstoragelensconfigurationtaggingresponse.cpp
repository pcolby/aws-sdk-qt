// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstoragelensconfigurationtaggingresponse.h"
#include "getstoragelensconfigurationtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingResponse
 * \brief The GetStorageLensConfigurationTaggingResponse class provides an interace for S3Control GetStorageLensConfigurationTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getStorageLensConfigurationTagging
 */

/*!
 * Constructs a GetStorageLensConfigurationTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetStorageLensConfigurationTaggingResponse::GetStorageLensConfigurationTaggingResponse(
        const GetStorageLensConfigurationTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetStorageLensConfigurationTaggingResponsePrivate(this), parent)
{
    setRequest(new GetStorageLensConfigurationTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStorageLensConfigurationTaggingRequest * GetStorageLensConfigurationTaggingResponse::request() const
{
    Q_D(const GetStorageLensConfigurationTaggingResponse);
    return static_cast<const GetStorageLensConfigurationTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetStorageLensConfigurationTagging \a response.
 */
void GetStorageLensConfigurationTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStorageLensConfigurationTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingResponsePrivate
 * \brief The GetStorageLensConfigurationTaggingResponsePrivate class provides private implementation for GetStorageLensConfigurationTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetStorageLensConfigurationTaggingResponsePrivate object with public implementation \a q.
 */
GetStorageLensConfigurationTaggingResponsePrivate::GetStorageLensConfigurationTaggingResponsePrivate(
    GetStorageLensConfigurationTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetStorageLensConfigurationTagging response element from \a xml.
 */
void GetStorageLensConfigurationTaggingResponsePrivate::parseGetStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStorageLensConfigurationTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
