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

#include "describehsmresponse.h"
#include "describehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeHsmResponse
 * \brief The DescribeHsmResponse class provides an interace for CloudHSM DescribeHsm responses.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::describeHsm
 */

/*!
 * Constructs a DescribeHsmResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHsmResponse::DescribeHsmResponse(
        const DescribeHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeHsmResponsePrivate(this), parent)
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
 * Parses a successful CloudHSM DescribeHsm \a response.
 */
void DescribeHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::DescribeHsmResponsePrivate
 * \brief The DescribeHsmResponsePrivate class provides private implementation for DescribeHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a DescribeHsmResponsePrivate object with public implementation \a q.
 */
DescribeHsmResponsePrivate::DescribeHsmResponsePrivate(
    DescribeHsmResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM DescribeHsm response element from \a xml.
 */
void DescribeHsmResponsePrivate::parseDescribeHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHsmResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
