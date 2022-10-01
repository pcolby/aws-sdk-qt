// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completeattachmentuploadresponse.h"
#include "completeattachmentuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::CompleteAttachmentUploadResponse
 * \brief The CompleteAttachmentUploadResponse class provides an interace for ConnectParticipant CompleteAttachmentUpload responses.
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
 * \sa ConnectParticipantClient::completeAttachmentUpload
 */

/*!
 * Constructs a CompleteAttachmentUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteAttachmentUploadResponse::CompleteAttachmentUploadResponse(
        const CompleteAttachmentUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new CompleteAttachmentUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteAttachmentUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteAttachmentUploadRequest * CompleteAttachmentUploadResponse::request() const
{
    Q_D(const CompleteAttachmentUploadResponse);
    return static_cast<const CompleteAttachmentUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant CompleteAttachmentUpload \a response.
 */
void CompleteAttachmentUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteAttachmentUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::CompleteAttachmentUploadResponsePrivate
 * \brief The CompleteAttachmentUploadResponsePrivate class provides private implementation for CompleteAttachmentUploadResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a CompleteAttachmentUploadResponsePrivate object with public implementation \a q.
 */
CompleteAttachmentUploadResponsePrivate::CompleteAttachmentUploadResponsePrivate(
    CompleteAttachmentUploadResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant CompleteAttachmentUpload response element from \a xml.
 */
void CompleteAttachmentUploadResponsePrivate::parseCompleteAttachmentUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteAttachmentUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
