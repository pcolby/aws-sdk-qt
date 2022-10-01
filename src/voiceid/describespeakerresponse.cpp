// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describespeakerresponse.h"
#include "describespeakerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::DescribeSpeakerResponse
 * \brief The DescribeSpeakerResponse class provides an interace for VoiceId DescribeSpeaker responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::describeSpeaker
 */

/*!
 * Constructs a DescribeSpeakerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSpeakerResponse::DescribeSpeakerResponse(
        const DescribeSpeakerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new DescribeSpeakerResponsePrivate(this), parent)
{
    setRequest(new DescribeSpeakerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSpeakerRequest * DescribeSpeakerResponse::request() const
{
    Q_D(const DescribeSpeakerResponse);
    return static_cast<const DescribeSpeakerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId DescribeSpeaker \a response.
 */
void DescribeSpeakerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSpeakerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::DescribeSpeakerResponsePrivate
 * \brief The DescribeSpeakerResponsePrivate class provides private implementation for DescribeSpeakerResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a DescribeSpeakerResponsePrivate object with public implementation \a q.
 */
DescribeSpeakerResponsePrivate::DescribeSpeakerResponsePrivate(
    DescribeSpeakerResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId DescribeSpeaker response element from \a xml.
 */
void DescribeSpeakerResponsePrivate::parseDescribeSpeakerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpeakerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
