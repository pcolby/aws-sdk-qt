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

#include "describeserverresponse.h"
#include "describeserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::DescribeServerResponse
 * \brief The DescribeServerResponse class provides an interace for Transfer DescribeServer responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::describeServer
 */

/*!
 * Constructs a DescribeServerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeServerResponse::DescribeServerResponse(
        const DescribeServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new DescribeServerResponsePrivate(this), parent)
{
    setRequest(new DescribeServerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeServerRequest * DescribeServerResponse::request() const
{
    Q_D(const DescribeServerResponse);
    return static_cast<const DescribeServerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer DescribeServer \a response.
 */
void DescribeServerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeServerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::DescribeServerResponsePrivate
 * \brief The DescribeServerResponsePrivate class provides private implementation for DescribeServerResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a DescribeServerResponsePrivate object with public implementation \a q.
 */
DescribeServerResponsePrivate::DescribeServerResponsePrivate(
    DescribeServerResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer DescribeServer response element from \a xml.
 */
void DescribeServerResponsePrivate::parseDescribeServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
