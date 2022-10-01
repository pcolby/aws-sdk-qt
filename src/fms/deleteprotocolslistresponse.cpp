// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprotocolslistresponse.h"
#include "deleteprotocolslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteProtocolsListResponse
 * \brief The DeleteProtocolsListResponse class provides an interace for Fms DeleteProtocolsList responses.
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
 * \sa FmsClient::deleteProtocolsList
 */

/*!
 * Constructs a DeleteProtocolsListResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProtocolsListResponse::DeleteProtocolsListResponse(
        const DeleteProtocolsListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new DeleteProtocolsListResponsePrivate(this), parent)
{
    setRequest(new DeleteProtocolsListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProtocolsListRequest * DeleteProtocolsListResponse::request() const
{
    Q_D(const DeleteProtocolsListResponse);
    return static_cast<const DeleteProtocolsListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms DeleteProtocolsList \a response.
 */
void DeleteProtocolsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProtocolsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::DeleteProtocolsListResponsePrivate
 * \brief The DeleteProtocolsListResponsePrivate class provides private implementation for DeleteProtocolsListResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteProtocolsListResponsePrivate object with public implementation \a q.
 */
DeleteProtocolsListResponsePrivate::DeleteProtocolsListResponsePrivate(
    DeleteProtocolsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms DeleteProtocolsList response element from \a xml.
 */
void DeleteProtocolsListResponsePrivate::parseDeleteProtocolsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProtocolsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
