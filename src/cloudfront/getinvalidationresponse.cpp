/*
    Copyright 2013-2019 Paul Colby

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

#include "getinvalidationresponse.h"
#include "getinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetInvalidationResponse
 * \brief The GetInvalidationResponse class provides an interace for CloudFront GetInvalidation responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getInvalidation
 */

/*!
 * Constructs a GetInvalidationResponse object for \a reply to \a request, with parent \a parent.
 */
GetInvalidationResponse::GetInvalidationResponse(
        const GetInvalidationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetInvalidationResponsePrivate(this), parent)
{
    setRequest(new GetInvalidationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInvalidationRequest * GetInvalidationResponse::request() const
{
    Q_D(const GetInvalidationResponse);
    return static_cast<const GetInvalidationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetInvalidation \a response.
 */
void GetInvalidationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInvalidationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetInvalidationResponsePrivate
 * \brief The GetInvalidationResponsePrivate class provides private implementation for GetInvalidationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetInvalidationResponsePrivate object with public implementation \a q.
 */
GetInvalidationResponsePrivate::GetInvalidationResponsePrivate(
    GetInvalidationResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetInvalidation response element from \a xml.
 */
void GetInvalidationResponsePrivate::parseGetInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvalidationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
