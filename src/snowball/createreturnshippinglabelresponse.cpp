// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreturnshippinglabelresponse.h"
#include "createreturnshippinglabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CreateReturnShippingLabelResponse
 * \brief The CreateReturnShippingLabelResponse class provides an interace for Snowball CreateReturnShippingLabel responses.
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
 * \sa SnowballClient::createReturnShippingLabel
 */

/*!
 * Constructs a CreateReturnShippingLabelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReturnShippingLabelResponse::CreateReturnShippingLabelResponse(
        const CreateReturnShippingLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CreateReturnShippingLabelResponsePrivate(this), parent)
{
    setRequest(new CreateReturnShippingLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReturnShippingLabelRequest * CreateReturnShippingLabelResponse::request() const
{
    Q_D(const CreateReturnShippingLabelResponse);
    return static_cast<const CreateReturnShippingLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball CreateReturnShippingLabel \a response.
 */
void CreateReturnShippingLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReturnShippingLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::CreateReturnShippingLabelResponsePrivate
 * \brief The CreateReturnShippingLabelResponsePrivate class provides private implementation for CreateReturnShippingLabelResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CreateReturnShippingLabelResponsePrivate object with public implementation \a q.
 */
CreateReturnShippingLabelResponsePrivate::CreateReturnShippingLabelResponsePrivate(
    CreateReturnShippingLabelResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball CreateReturnShippingLabel response element from \a xml.
 */
void CreateReturnShippingLabelResponsePrivate::parseCreateReturnShippingLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReturnShippingLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
