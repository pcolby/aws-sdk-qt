// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
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
