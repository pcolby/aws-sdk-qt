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

#include "createaddressresponse.h"
#include "createaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CreateAddressResponse
 * \brief The CreateAddressResponse class provides an interace for Snowball CreateAddress responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
 *
 * \sa SnowballClient::createAddress
 */

/*!
 * Constructs a CreateAddressResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAddressResponse::CreateAddressResponse(
        const CreateAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateAddressResponsePrivate(this), parent)
{
    setRequest(new CreateAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAddressRequest * CreateAddressResponse::request() const
{
    Q_D(const CreateAddressResponse);
    return static_cast<const CreateAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball CreateAddress \a response.
 */
void CreateAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::CreateAddressResponsePrivate
 * \brief The CreateAddressResponsePrivate class provides private implementation for CreateAddressResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CreateAddressResponsePrivate object with public implementation \a q.
 */
CreateAddressResponsePrivate::CreateAddressResponsePrivate(
    CreateAddressResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball CreateAddress response element from \a xml.
 */
void CreateAddressResponsePrivate::parseCreateAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
