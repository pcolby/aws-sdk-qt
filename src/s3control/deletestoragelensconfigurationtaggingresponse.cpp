// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestoragelensconfigurationtaggingresponse.h"
#include "deletestoragelensconfigurationtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationTaggingResponse
 * \brief The DeleteStorageLensConfigurationTaggingResponse class provides an interace for S3Control DeleteStorageLensConfigurationTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteStorageLensConfigurationTagging
 */

/*!
 * Constructs a DeleteStorageLensConfigurationTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStorageLensConfigurationTaggingResponse::DeleteStorageLensConfigurationTaggingResponse(
        const DeleteStorageLensConfigurationTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteStorageLensConfigurationTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteStorageLensConfigurationTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStorageLensConfigurationTaggingRequest * DeleteStorageLensConfigurationTaggingResponse::request() const
{
    Q_D(const DeleteStorageLensConfigurationTaggingResponse);
    return static_cast<const DeleteStorageLensConfigurationTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteStorageLensConfigurationTagging \a response.
 */
void DeleteStorageLensConfigurationTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStorageLensConfigurationTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationTaggingResponsePrivate
 * \brief The DeleteStorageLensConfigurationTaggingResponsePrivate class provides private implementation for DeleteStorageLensConfigurationTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteStorageLensConfigurationTaggingResponsePrivate object with public implementation \a q.
 */
DeleteStorageLensConfigurationTaggingResponsePrivate::DeleteStorageLensConfigurationTaggingResponsePrivate(
    DeleteStorageLensConfigurationTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteStorageLensConfigurationTagging response element from \a xml.
 */
void DeleteStorageLensConfigurationTaggingResponsePrivate::parseDeleteStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStorageLensConfigurationTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
