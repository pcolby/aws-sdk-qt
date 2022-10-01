// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeliverabilitytestreportresponse.h"
#include "createdeliverabilitytestreportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateDeliverabilityTestReportResponse
 * \brief The CreateDeliverabilityTestReportResponse class provides an interace for SESv2 CreateDeliverabilityTestReport responses.
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
 * \sa SESv2Client::createDeliverabilityTestReport
 */

/*!
 * Constructs a CreateDeliverabilityTestReportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeliverabilityTestReportResponse::CreateDeliverabilityTestReportResponse(
        const CreateDeliverabilityTestReportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateDeliverabilityTestReportResponsePrivate(this), parent)
{
    setRequest(new CreateDeliverabilityTestReportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeliverabilityTestReportRequest * CreateDeliverabilityTestReportResponse::request() const
{
    Q_D(const CreateDeliverabilityTestReportResponse);
    return static_cast<const CreateDeliverabilityTestReportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateDeliverabilityTestReport \a response.
 */
void CreateDeliverabilityTestReportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeliverabilityTestReportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateDeliverabilityTestReportResponsePrivate
 * \brief The CreateDeliverabilityTestReportResponsePrivate class provides private implementation for CreateDeliverabilityTestReportResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateDeliverabilityTestReportResponsePrivate object with public implementation \a q.
 */
CreateDeliverabilityTestReportResponsePrivate::CreateDeliverabilityTestReportResponsePrivate(
    CreateDeliverabilityTestReportResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateDeliverabilityTestReport response element from \a xml.
 */
void CreateDeliverabilityTestReportResponsePrivate::parseCreateDeliverabilityTestReportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeliverabilityTestReportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
