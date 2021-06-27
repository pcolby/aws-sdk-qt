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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
    return static_cast<const DeleteStorageLensConfigurationTaggingRequest *>(S3ControlResponse::request());
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
