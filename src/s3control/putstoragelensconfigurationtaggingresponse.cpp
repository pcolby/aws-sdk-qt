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
