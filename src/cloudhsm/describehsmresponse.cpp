// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehsmresponse.h"
#include "describehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeHsmResponse
 * \brief The DescribeHsmResponse class provides an interace for CloudHsm DescribeHsm responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::describeHsm
 */

/*!
 * Constructs a DescribeHsmResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHsmResponse::DescribeHsmResponse(
        const DescribeHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DescribeHsmResponsePrivate(this), parent)
{
    setRequest(new DescribeHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHsmRequest * DescribeHsmResponse::request() const
{
    Q_D(const DescribeHsmResponse);
    return static_cast<const DescribeHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm DescribeHsm \a response.
 */
void DescribeHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DescribeHsmResponsePrivate
 * \brief The DescribeHsmResponsePrivate class provides private implementation for DescribeHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeHsmResponsePrivate object with public implementation \a q.
 */
DescribeHsmResponsePrivate::DescribeHsmResponsePrivate(
    DescribeHsmResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DescribeHsm response element from \a xml.
 */
void DescribeHsmResponsePrivate::parseDescribeHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
