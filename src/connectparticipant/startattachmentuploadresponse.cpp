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

#include "startattachmentuploadresponse.h"
#include "startattachmentuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::StartAttachmentUploadResponse
 * \brief The StartAttachmentUploadResponse class provides an interace for ConnectParticipant StartAttachmentUpload responses.
 *
 * \inmodule QtAwsConnectParticipant
 *
 *  Amazon Connect is a cloud-based contact center solution that makes it easy to set up and manage a customer contact
 *  center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect enables customer contacts through voice or
 * 
 *  chat>
 * 
 *  The APIs described here are used by chat participants, such as agents and
 *
 * \sa ConnectParticipantClient::startAttachmentUpload
 */

/*!
 * Constructs a StartAttachmentUploadResponse object for \a reply to \a request, with parent \a parent.
 */
StartAttachmentUploadResponse::StartAttachmentUploadResponse(
        const StartAttachmentUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new StartAttachmentUploadResponsePrivate(this), parent)
{
    setRequest(new StartAttachmentUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartAttachmentUploadRequest * StartAttachmentUploadResponse::request() const
{
    Q_D(const StartAttachmentUploadResponse);
    return static_cast<const StartAttachmentUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant StartAttachmentUpload \a response.
 */
void StartAttachmentUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartAttachmentUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::StartAttachmentUploadResponsePrivate
 * \brief The StartAttachmentUploadResponsePrivate class provides private implementation for StartAttachmentUploadResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a StartAttachmentUploadResponsePrivate object with public implementation \a q.
 */
StartAttachmentUploadResponsePrivate::StartAttachmentUploadResponsePrivate(
    StartAttachmentUploadResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant StartAttachmentUpload response element from \a xml.
 */
void StartAttachmentUploadResponsePrivate::parseStartAttachmentUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAttachmentUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
