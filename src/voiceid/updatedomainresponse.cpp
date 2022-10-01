// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainresponse.h"
#include "updatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::UpdateDomainResponse
 * \brief The UpdateDomainResponse class provides an interace for VoiceId UpdateDomain responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::updateDomain
 */

/*!
 * Constructs a UpdateDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainResponse::UpdateDomainResponse(
        const UpdateDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new UpdateDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainRequest * UpdateDomainResponse::request() const
{
    Q_D(const UpdateDomainResponse);
    return static_cast<const UpdateDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId UpdateDomain \a response.
 */
void UpdateDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::UpdateDomainResponsePrivate
 * \brief The UpdateDomainResponsePrivate class provides private implementation for UpdateDomainResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a UpdateDomainResponsePrivate object with public implementation \a q.
 */
UpdateDomainResponsePrivate::UpdateDomainResponsePrivate(
    UpdateDomainResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId UpdateDomain response element from \a xml.
 */
void UpdateDomainResponsePrivate::parseUpdateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
