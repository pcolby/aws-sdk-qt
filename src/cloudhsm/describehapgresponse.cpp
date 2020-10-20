/*
    Copyright 2013-2020 Paul Colby

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

#include "describehapgresponse.h"
#include "describehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeHapgResponse
 * \brief The DescribeHapgResponse class provides an interace for CloudHSM DescribeHapg responses.
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
 * \sa CloudHSMClient::describeHapg
 */

/*!
 * Constructs a DescribeHapgResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHapgResponse::DescribeHapgResponse(
        const DescribeHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeHapgResponsePrivate(this), parent)
{
    setRequest(new DescribeHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHapgRequest * DescribeHapgResponse::request() const
{
    Q_D(const DescribeHapgResponse);
    return static_cast<const DescribeHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM DescribeHapg \a response.
 */
void DescribeHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::DescribeHapgResponsePrivate
 * \brief The DescribeHapgResponsePrivate class provides private implementation for DescribeHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a DescribeHapgResponsePrivate object with public implementation \a q.
 */
DescribeHapgResponsePrivate::DescribeHapgResponsePrivate(
    DescribeHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM DescribeHapg response element from \a xml.
 */
void DescribeHapgResponsePrivate::parseDescribeHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSM
} // namespace QtAws
