// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimportjobsresponse.h"
#include "listimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListImportJobsResponse
 * \brief The ListImportJobsResponse class provides an interace for SESv2 ListImportJobs responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listImportJobs
 */

/*!
 * Constructs a ListImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListImportJobsResponse::ListImportJobsResponse(
        const ListImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImportJobsRequest * ListImportJobsResponse::request() const
{
    Q_D(const ListImportJobsResponse);
    return static_cast<const ListImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListImportJobs \a response.
 */
void ListImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListImportJobsResponsePrivate
 * \brief The ListImportJobsResponsePrivate class provides private implementation for ListImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListImportJobsResponsePrivate object with public implementation \a q.
 */
ListImportJobsResponsePrivate::ListImportJobsResponsePrivate(
    ListImportJobsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListImportJobs response element from \a xml.
 */
void ListImportJobsResponsePrivate::parseListImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
