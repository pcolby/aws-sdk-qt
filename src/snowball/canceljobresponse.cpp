// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobresponse.h"
#include "canceljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::CancelJobResponse
 * \brief The CancelJobResponse class provides an interace for Snowball CancelJob responses.
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
 * \sa SnowballClient::cancelJob
 */

/*!
 * Constructs a CancelJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJobResponse::CancelJobResponse(
        const CancelJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CancelJobResponsePrivate(this), parent)
{
    setRequest(new CancelJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJobRequest * CancelJobResponse::request() const
{
    Q_D(const CancelJobResponse);
    return static_cast<const CancelJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball CancelJob \a response.
 */
void CancelJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::CancelJobResponsePrivate
 * \brief The CancelJobResponsePrivate class provides private implementation for CancelJobResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a CancelJobResponsePrivate object with public implementation \a q.
 */
CancelJobResponsePrivate::CancelJobResponsePrivate(
    CancelJobResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball CancelJob response element from \a xml.
 */
void CancelJobResponsePrivate::parseCancelJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
