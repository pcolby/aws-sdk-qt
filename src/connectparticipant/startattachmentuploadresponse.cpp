// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
