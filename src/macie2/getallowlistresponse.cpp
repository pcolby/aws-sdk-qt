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

#include "getallowlistresponse.h"
#include "getallowlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetAllowListResponse
 * \brief The GetAllowListResponse class provides an interace for Macie2 GetAllowList responses.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getAllowList
 */

/*!
 * Constructs a GetAllowListResponse object for \a reply to \a request, with parent \a parent.
 */
GetAllowListResponse::GetAllowListResponse(
        const GetAllowListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Macie2Response(new GetAllowListResponsePrivate(this), parent)
{
    setRequest(new GetAllowListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAllowListRequest * GetAllowListResponse::request() const
{
    Q_D(const GetAllowListResponse);
    return static_cast<const GetAllowListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie2 GetAllowList \a response.
 */
void GetAllowListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAllowListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie2::GetAllowListResponsePrivate
 * \brief The GetAllowListResponsePrivate class provides private implementation for GetAllowListResponse.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetAllowListResponsePrivate object with public implementation \a q.
 */
GetAllowListResponsePrivate::GetAllowListResponsePrivate(
    GetAllowListResponse * const q) : Macie2ResponsePrivate(q)
{

}

/*!
 * Parses a Macie2 GetAllowList response element from \a xml.
 */
void GetAllowListResponsePrivate::parseGetAllowListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAllowListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie2
} // namespace QtAws
