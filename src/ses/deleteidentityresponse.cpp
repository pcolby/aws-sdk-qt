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

#include "deleteidentityresponse.h"
#include "deleteidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteIdentityResponse
 * \brief The DeleteIdentityResponse class provides an interace for SES DeleteIdentity responses.
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
 * \sa SesClient::deleteIdentity
 */

/*!
 * Constructs a DeleteIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIdentityResponse::DeleteIdentityResponse(
        const DeleteIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIdentityRequest * DeleteIdentityResponse::request() const
{
    Q_D(const DeleteIdentityResponse);
    return static_cast<const DeleteIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SES DeleteIdentity \a response.
 */
void DeleteIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::DeleteIdentityResponsePrivate
 * \brief The DeleteIdentityResponsePrivate class provides private implementation for DeleteIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteIdentityResponsePrivate object with public implementation \a q.
 */
DeleteIdentityResponsePrivate::DeleteIdentityResponsePrivate(
    DeleteIdentityResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES DeleteIdentity response element from \a xml.
 */
void DeleteIdentityResponsePrivate::parseDeleteIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
