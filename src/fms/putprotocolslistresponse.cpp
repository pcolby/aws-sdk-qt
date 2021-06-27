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

#include "putprotocolslistresponse.h"
#include "putprotocolslistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::PutProtocolsListResponse
 * \brief The PutProtocolsListResponse class provides an interace for FMS PutProtocolsList responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
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
    return static_cast<const PutProtocolsListRequest *>(FmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful FMS PutProtocolsList \a response.
 */
void PutProtocolsListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutProtocolsListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::PutProtocolsListResponsePrivate
 * \brief The PutProtocolsListResponsePrivate class provides private implementation for PutProtocolsListResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a PutProtocolsListResponsePrivate object with public implementation \a q.
 */
PutProtocolsListResponsePrivate::PutProtocolsListResponsePrivate(
    PutProtocolsListResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS PutProtocolsList response element from \a xml.
 */
void PutProtocolsListResponsePrivate::parsePutProtocolsListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutProtocolsListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
