// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprotocolslistresponse.h"
#include "getprotocolslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetProtocolsListResponse
 * \brief The GetProtocolsListResponse class provides an interace for Fms GetProtocolsList responses.
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
 * \sa FmsClient::getProtocolsList
 */

/*!
 * Constructs a GetProtocolsListResponse object for \a reply to \a request, with parent \a parent.
 */
GetProtocolsListResponse::GetProtocolsListResponse(
        const GetProtocolsListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetProtocolsListResponsePrivate(this), parent)
{
    setRequest(new GetProtocolsListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProtocolsListRequest * GetProtocolsListResponse::request() const
{
    Q_D(const GetProtocolsListResponse);
    return static_cast<const GetProtocolsListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms GetProtocolsList \a response.
 */
void GetProtocolsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProtocolsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetProtocolsListResponsePrivate
 * \brief The GetProtocolsListResponsePrivate class provides private implementation for GetProtocolsListResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetProtocolsListResponsePrivate object with public implementation \a q.
 */
GetProtocolsListResponsePrivate::GetProtocolsListResponsePrivate(
    GetProtocolsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetProtocolsList response element from \a xml.
 */
void GetProtocolsListResponsePrivate::parseGetProtocolsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProtocolsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
