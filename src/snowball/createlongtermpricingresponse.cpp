// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlongtermpricingresponse.h"
#include "createlongtermpricingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CreateLongTermPricingResponse
 * \brief The CreateLongTermPricingResponse class provides an interace for Snowball CreateLongTermPricing responses.
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
 * \sa SnowballClient::createLongTermPricing
 */

/*!
 * Constructs a CreateLongTermPricingResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLongTermPricingResponse::CreateLongTermPricingResponse(
        const CreateLongTermPricingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateLongTermPricingResponsePrivate(this), parent)
{
    setRequest(new CreateLongTermPricingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLongTermPricingRequest * CreateLongTermPricingResponse::request() const
{
    Q_D(const CreateLongTermPricingResponse);
    return static_cast<const CreateLongTermPricingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball CreateLongTermPricing \a response.
 */
void CreateLongTermPricingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLongTermPricingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::CreateLongTermPricingResponsePrivate
 * \brief The CreateLongTermPricingResponsePrivate class provides private implementation for CreateLongTermPricingResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CreateLongTermPricingResponsePrivate object with public implementation \a q.
 */
CreateLongTermPricingResponsePrivate::CreateLongTermPricingResponsePrivate(
    CreateLongTermPricingResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball CreateLongTermPricing response element from \a xml.
 */
void CreateLongTermPricingResponsePrivate::parseCreateLongTermPricingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLongTermPricingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
