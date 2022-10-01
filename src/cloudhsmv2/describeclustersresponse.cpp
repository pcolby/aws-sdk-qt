// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclustersresponse.h"
#include "describeclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DescribeClustersResponse
 * \brief The DescribeClustersResponse class provides an interace for CloudHsmV2 DescribeClusters responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::describeClusters
 */

/*!
 * Constructs a DescribeClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClustersResponse::DescribeClustersResponse(
        const DescribeClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new DescribeClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClustersRequest * DescribeClustersResponse::request() const
{
    Q_D(const DescribeClustersResponse);
    return static_cast<const DescribeClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 DescribeClusters \a response.
 */
void DescribeClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::DescribeClustersResponsePrivate
 * \brief The DescribeClustersResponsePrivate class provides private implementation for DescribeClustersResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DescribeClustersResponsePrivate object with public implementation \a q.
 */
DescribeClustersResponsePrivate::DescribeClustersResponsePrivate(
    DescribeClustersResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 DescribeClusters response element from \a xml.
 */
void DescribeClustersResponsePrivate::parseDescribeClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
