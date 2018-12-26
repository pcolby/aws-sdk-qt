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

#include "describeuserresponse.h"
#include "describeuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeUserResponse
 * \brief The DescribeUserResponse class provides an interace for Transfer DescribeUser responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::describeUser
 */

/*!
 * Constructs a DescribeUserResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserResponse::DescribeUserResponse(
        const DescribeUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeUserResponsePrivate(this), parent)
{
    setRequest(new DescribeUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserRequest * DescribeUserResponse::request() const
{
    Q_D(const DescribeUserResponse);
    return static_cast<const DescribeUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeUser \a response.
 */
void DescribeUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeUserResponsePrivate
 * \brief The DescribeUserResponsePrivate class provides private implementation for DescribeUserResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeUserResponsePrivate object with public implementation \a q.
 */
DescribeUserResponsePrivate::DescribeUserResponsePrivate(
    DescribeUserResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeUser response element from \a xml.
 */
void DescribeUserResponsePrivate::parseDescribeUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
