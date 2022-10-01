// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putstoragelensconfigurationtaggingresponse.h"
#include "putstoragelensconfigurationtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationTaggingResponse
 * \brief The PutStorageLensConfigurationTaggingResponse class provides an interace for S3Control PutStorageLensConfigurationTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putStorageLensConfigurationTagging
 */

/*!
 * Constructs a PutStorageLensConfigurationTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutStorageLensConfigurationTaggingResponse::PutStorageLensConfigurationTaggingResponse(
        const PutStorageLensConfigurationTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutStorageLensConfigurationTaggingResponsePrivate(this), parent)
{
    setRequest(new PutStorageLensConfigurationTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStorageLensConfigurationTaggingRequest * PutStorageLensConfigurationTaggingResponse::request() const
{
    Q_D(const PutStorageLensConfigurationTaggingResponse);
    return static_cast<const PutStorageLensConfigurationTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutStorageLensConfigurationTagging \a response.
 */
void PutStorageLensConfigurationTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStorageLensConfigurationTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationTaggingResponsePrivate
 * \brief The PutStorageLensConfigurationTaggingResponsePrivate class provides private implementation for PutStorageLensConfigurationTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutStorageLensConfigurationTaggingResponsePrivate object with public implementation \a q.
 */
PutStorageLensConfigurationTaggingResponsePrivate::PutStorageLensConfigurationTaggingResponsePrivate(
    PutStorageLensConfigurationTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutStorageLensConfigurationTagging response element from \a xml.
 */
void PutStorageLensConfigurationTaggingResponsePrivate::parsePutStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStorageLensConfigurationTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
