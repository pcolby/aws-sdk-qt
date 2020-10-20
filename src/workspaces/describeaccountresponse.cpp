/*
    Copyright 2013-2020 Paul Colby

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

#include "describeaccountresponse.h"
#include "describeaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::DescribeAccountResponse
 * \brief The DescribeAccountResponse class provides an interace for WorkSpaces DescribeAccount responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::describeAccount
 */

/*!
 * Constructs a DescribeAccountResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountResponse::DescribeAccountResponse(
        const DescribeAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeAccountResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountRequest * DescribeAccountResponse::request() const
{
    Q_D(const DescribeAccountResponse);
    return static_cast<const DescribeAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces DescribeAccount \a response.
 */
void DescribeAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::DescribeAccountResponsePrivate
 * \brief The DescribeAccountResponsePrivate class provides private implementation for DescribeAccountResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a DescribeAccountResponsePrivate object with public implementation \a q.
 */
DescribeAccountResponsePrivate::DescribeAccountResponsePrivate(
    DescribeAccountResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces DescribeAccount response element from \a xml.
 */
void DescribeAccountResponsePrivate::parseDescribeAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
