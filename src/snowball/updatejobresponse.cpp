// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobresponse.h"
#include "updatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateJobResponse
 * \brief The UpdateJobResponse class provides an interace for Snowball UpdateJob responses.
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
 * \sa SnowballClient::updateJob
 */

/*!
 * Constructs a UpdateJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobResponse::UpdateJobResponse(
        const UpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new UpdateJobResponsePrivate(this), parent)
{
    setRequest(new UpdateJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobRequest * UpdateJobResponse::request() const
{
    Q_D(const UpdateJobResponse);
    return static_cast<const UpdateJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball UpdateJob \a response.
 */
void UpdateJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::UpdateJobResponsePrivate
 * \brief The UpdateJobResponsePrivate class provides private implementation for UpdateJobResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateJobResponsePrivate object with public implementation \a q.
 */
UpdateJobResponsePrivate::UpdateJobResponsePrivate(
    UpdateJobResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball UpdateJob response element from \a xml.
 */
void UpdateJobResponsePrivate::parseUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
