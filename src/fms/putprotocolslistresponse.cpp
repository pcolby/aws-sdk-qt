// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprotocolslistresponse.h"
#include "putprotocolslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::PutProtocolsListResponse
 * \brief The PutProtocolsListResponse class provides an interace for Fms PutProtocolsList responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::putProtocolsList
 */

/*!
 * Constructs a PutProtocolsListResponse object for \a reply to \a request, with parent \a parent.
 */
PutProtocolsListResponse::PutProtocolsListResponse(
        const PutProtocolsListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new PutProtocolsListResponsePrivate(this), parent)
{
    setRequest(new PutProtocolsListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutProtocolsListRequest * PutProtocolsListResponse::request() const
{
    Q_D(const PutProtocolsListResponse);
    return static_cast<const PutProtocolsListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms PutProtocolsList \a response.
 */
void PutProtocolsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutProtocolsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::PutProtocolsListResponsePrivate
 * \brief The PutProtocolsListResponsePrivate class provides private implementation for PutProtocolsListResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a PutProtocolsListResponsePrivate object with public implementation \a q.
 */
PutProtocolsListResponsePrivate::PutProtocolsListResponsePrivate(
    PutProtocolsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms PutProtocolsList response element from \a xml.
 */
void PutProtocolsListResponsePrivate::parsePutProtocolsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutProtocolsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
