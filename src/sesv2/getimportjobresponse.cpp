// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobresponse.h"
#include "getimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetImportJobResponse
 * \brief The GetImportJobResponse class provides an interace for SESv2 GetImportJob responses.
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
 * \sa SESv2Client::getImportJob
 */

/*!
 * Constructs a GetImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportJobResponse::GetImportJobResponse(
        const GetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetImportJobResponsePrivate(this), parent)
{
    setRequest(new GetImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportJobRequest * GetImportJobResponse::request() const
{
    Q_D(const GetImportJobResponse);
    return static_cast<const GetImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetImportJob \a response.
 */
void GetImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetImportJobResponsePrivate
 * \brief The GetImportJobResponsePrivate class provides private implementation for GetImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetImportJobResponsePrivate object with public implementation \a q.
 */
GetImportJobResponsePrivate::GetImportJobResponsePrivate(
    GetImportJobResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetImportJob response element from \a xml.
 */
void GetImportJobResponsePrivate::parseGetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
