/*
    Copyright 2013-2018 Paul Colby

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

#include "getcompliancedetailresponse.h"
#include "getcompliancedetailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetComplianceDetailResponse
 * \brief The GetComplianceDetailResponse class provides an interace for FMS GetComplianceDetail responses.
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
 * \sa FmsClient::getComplianceDetail
 */

/*!
 * Constructs a GetComplianceDetailResponse object for \a reply to \a request, with parent \a parent.
 */
GetComplianceDetailResponse::GetComplianceDetailResponse(
        const GetComplianceDetailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetComplianceDetailResponsePrivate(this), parent)
{
    setRequest(new GetComplianceDetailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetComplianceDetailRequest * GetComplianceDetailResponse::request() const
{
    Q_D(const GetComplianceDetailResponse);
    return static_cast<const GetComplianceDetailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS GetComplianceDetail \a response.
 */
void GetComplianceDetailResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetComplianceDetailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::GetComplianceDetailResponsePrivate
 * \brief The GetComplianceDetailResponsePrivate class provides private implementation for GetComplianceDetailResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetComplianceDetailResponsePrivate object with public implementation \a q.
 */
GetComplianceDetailResponsePrivate::GetComplianceDetailResponsePrivate(
    GetComplianceDetailResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS GetComplianceDetail response element from \a xml.
 */
void GetComplianceDetailResponsePrivate::parseGetComplianceDetailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetComplianceDetailResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
