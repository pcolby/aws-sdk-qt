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

#include "getidentitydkimattributesresponse.h"
#include "getidentitydkimattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetIdentityDkimAttributesResponse
 * \brief The GetIdentityDkimAttributesResponse class provides an interace for SES GetIdentityDkimAttributes responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getIdentityDkimAttributes
 */

/*!
 * Constructs a GetIdentityDkimAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityDkimAttributesResponse::GetIdentityDkimAttributesResponse(
        const GetIdentityDkimAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityDkimAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityDkimAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityDkimAttributesRequest * GetIdentityDkimAttributesResponse::request() const
{
    return static_cast<const GetIdentityDkimAttributesRequest *>(SesResponse::request());
}

/*!
 * \reimp
 * Parses a successful SES GetIdentityDkimAttributes \a response.
 */
void GetIdentityDkimAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityDkimAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::GetIdentityDkimAttributesResponsePrivate
 * \brief The GetIdentityDkimAttributesResponsePrivate class provides private implementation for GetIdentityDkimAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a GetIdentityDkimAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityDkimAttributesResponsePrivate::GetIdentityDkimAttributesResponsePrivate(
    GetIdentityDkimAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES GetIdentityDkimAttributes response element from \a xml.
 */
void GetIdentityDkimAttributesResponsePrivate::parseGetIdentityDkimAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityDkimAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
