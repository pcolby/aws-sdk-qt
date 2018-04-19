/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listcompliancestatusresponse.h"
#include "listcompliancestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListComplianceStatusResponse
 * \brief The ListComplianceStatusResponse class provides an interace for FMS ListComplianceStatus responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::listComplianceStatus
 */

/*!
 * Constructs a ListComplianceStatusResponse object for \a reply to \a request, with parent \a parent.
 */
ListComplianceStatusResponse::ListComplianceStatusResponse(
        const ListComplianceStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new ListComplianceStatusResponsePrivate(this), parent)
{
    setRequest(new ListComplianceStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComplianceStatusRequest * ListComplianceStatusResponse::request() const
{
    Q_D(const ListComplianceStatusResponse);
    return static_cast<const ListComplianceStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS ListComplianceStatus \a response.
 */
void ListComplianceStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListComplianceStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::ListComplianceStatusResponsePrivate
 * \brief The ListComplianceStatusResponsePrivate class provides private implementation for ListComplianceStatusResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a ListComplianceStatusResponsePrivate object with public implementation \a q.
 */
ListComplianceStatusResponsePrivate::ListComplianceStatusResponsePrivate(
    ListComplianceStatusResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * Parses a FMS ListComplianceStatus response element from \a xml.
 */
void ListComplianceStatusResponsePrivate::parseListComplianceStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComplianceStatusResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
