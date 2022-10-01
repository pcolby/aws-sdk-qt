// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelunaclientresponse.h"
#include "describelunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeLunaClientResponse
 * \brief The DescribeLunaClientResponse class provides an interace for CloudHsm DescribeLunaClient responses.
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
 * \sa CloudHsmClient::describeLunaClient
 */

/*!
 * Constructs a DescribeLunaClientResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLunaClientResponse::DescribeLunaClientResponse(
        const DescribeLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DescribeLunaClientResponsePrivate(this), parent)
{
    setRequest(new DescribeLunaClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLunaClientRequest * DescribeLunaClientResponse::request() const
{
    Q_D(const DescribeLunaClientResponse);
    return static_cast<const DescribeLunaClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm DescribeLunaClient \a response.
 */
void DescribeLunaClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DescribeLunaClientResponsePrivate
 * \brief The DescribeLunaClientResponsePrivate class provides private implementation for DescribeLunaClientResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeLunaClientResponsePrivate object with public implementation \a q.
 */
DescribeLunaClientResponsePrivate::DescribeLunaClientResponsePrivate(
    DescribeLunaClientResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DescribeLunaClient response element from \a xml.
 */
void DescribeLunaClientResponsePrivate::parseDescribeLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLunaClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
