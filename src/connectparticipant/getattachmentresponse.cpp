// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getattachmentresponse.h"
#include "getattachmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectParticipant {

/*!
 * \class QtAws::ConnectParticipant::GetAttachmentResponse
 * \brief The GetAttachmentResponse class provides an interace for ConnectParticipant GetAttachment responses.
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
 * \sa ConnectParticipantClient::getAttachment
 */

/*!
 * Constructs a GetAttachmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetAttachmentResponse::GetAttachmentResponse(
        const GetAttachmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectParticipantResponse(new GetAttachmentResponsePrivate(this), parent)
{
    setRequest(new GetAttachmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAttachmentRequest * GetAttachmentResponse::request() const
{
    Q_D(const GetAttachmentResponse);
    return static_cast<const GetAttachmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectParticipant GetAttachment \a response.
 */
void GetAttachmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAttachmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectParticipant::GetAttachmentResponsePrivate
 * \brief The GetAttachmentResponsePrivate class provides private implementation for GetAttachmentResponse.
 * \internal
 *
 * \inmodule QtAwsConnectParticipant
 */

/*!
 * Constructs a GetAttachmentResponsePrivate object with public implementation \a q.
 */
GetAttachmentResponsePrivate::GetAttachmentResponsePrivate(
    GetAttachmentResponse * const q) : ConnectParticipantResponsePrivate(q)
{

}

/*!
 * Parses a ConnectParticipant GetAttachment response element from \a xml.
 */
void GetAttachmentResponsePrivate::parseGetAttachmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAttachmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectParticipant
} // namespace QtAws
