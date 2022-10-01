// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testrenderemailtemplateresponse.h"
#include "testrenderemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::TestRenderEmailTemplateResponse
 * \brief The TestRenderEmailTemplateResponse class provides an interace for SESv2 TestRenderEmailTemplate responses.
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
 * \sa SESv2Client::testRenderEmailTemplate
 */

/*!
 * Constructs a TestRenderEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
TestRenderEmailTemplateResponse::TestRenderEmailTemplateResponse(
        const TestRenderEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new TestRenderEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new TestRenderEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestRenderEmailTemplateRequest * TestRenderEmailTemplateResponse::request() const
{
    Q_D(const TestRenderEmailTemplateResponse);
    return static_cast<const TestRenderEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 TestRenderEmailTemplate \a response.
 */
void TestRenderEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestRenderEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::TestRenderEmailTemplateResponsePrivate
 * \brief The TestRenderEmailTemplateResponsePrivate class provides private implementation for TestRenderEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a TestRenderEmailTemplateResponsePrivate object with public implementation \a q.
 */
TestRenderEmailTemplateResponsePrivate::TestRenderEmailTemplateResponsePrivate(
    TestRenderEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 TestRenderEmailTemplate response element from \a xml.
 */
void TestRenderEmailTemplateResponsePrivate::parseTestRenderEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRenderEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
