// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsresponse.h"
#include "listdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace VoiceId {

/*!
 * \class QtAws::VoiceId::ListDomainsResponse
 * \brief The ListDomainsResponse class provides an interace for VoiceId ListDomains responses.
 *
 * \inmodule QtAwsVoiceId
 *
 *  Amazon Connect Voice ID provides real-time caller authentication and fraud screening. This guide describes the APIs used
 *  for this service.
 *
 * \sa VoiceIdClient::listDomains
 */

/*!
 * Constructs a ListDomainsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDomainsResponse::ListDomainsResponse(
        const ListDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : VoiceIdResponse(new ListDomainsResponsePrivate(this), parent)
{
    setRequest(new ListDomainsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDomainsRequest * ListDomainsResponse::request() const
{
    Q_D(const ListDomainsResponse);
    return static_cast<const ListDomainsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful VoiceId ListDomains \a response.
 */
void ListDomainsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::VoiceId::ListDomainsResponsePrivate
 * \brief The ListDomainsResponsePrivate class provides private implementation for ListDomainsResponse.
 * \internal
 *
 * \inmodule QtAwsVoiceId
 */

/*!
 * Constructs a ListDomainsResponsePrivate object with public implementation \a q.
 */
ListDomainsResponsePrivate::ListDomainsResponsePrivate(
    ListDomainsResponse * const q) : VoiceIdResponsePrivate(q)
{

}

/*!
 * Parses a VoiceId ListDomains response element from \a xml.
 */
void ListDomainsResponsePrivate::parseListDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace VoiceId
} // namespace QtAws
