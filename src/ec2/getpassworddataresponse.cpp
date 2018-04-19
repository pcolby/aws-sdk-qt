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

#include "getpassworddataresponse.h"
#include "getpassworddataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::GetPasswordDataResponse
 * \brief The GetPasswordDataResponse class provides an interace for EC2 GetPasswordData responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::getPasswordData
 */

/*!
 * Constructs a GetPasswordDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetPasswordDataResponse::GetPasswordDataResponse(
        const GetPasswordDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetPasswordDataResponsePrivate(this), parent)
{
    setRequest(new GetPasswordDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPasswordDataRequest * GetPasswordDataResponse::request() const
{
    Q_D(const GetPasswordDataResponse);
    return static_cast<const GetPasswordDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 GetPasswordData \a response.
 */
void GetPasswordDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPasswordDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::GetPasswordDataResponsePrivate
 * \brief The GetPasswordDataResponsePrivate class provides private implementation for GetPasswordDataResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a GetPasswordDataResponsePrivate object with public implementation \a q.
 */
GetPasswordDataResponsePrivate::GetPasswordDataResponsePrivate(
    GetPasswordDataResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 GetPasswordData response element from \a xml.
 */
void GetPasswordDataResponsePrivate::parseGetPasswordDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPasswordDataResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
