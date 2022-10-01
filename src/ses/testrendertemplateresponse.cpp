// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testrendertemplateresponse.h"
#include "testrendertemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::TestRenderTemplateResponse
 * \brief The TestRenderTemplateResponse class provides an interace for Ses TestRenderTemplate responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::testRenderTemplate
 */

/*!
 * Constructs a TestRenderTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
TestRenderTemplateResponse::TestRenderTemplateResponse(
        const TestRenderTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new TestRenderTemplateResponsePrivate(this), parent)
{
    setRequest(new TestRenderTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestRenderTemplateRequest * TestRenderTemplateResponse::request() const
{
    Q_D(const TestRenderTemplateResponse);
    return static_cast<const TestRenderTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses TestRenderTemplate \a response.
 */
void TestRenderTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestRenderTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::TestRenderTemplateResponsePrivate
 * \brief The TestRenderTemplateResponsePrivate class provides private implementation for TestRenderTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a TestRenderTemplateResponsePrivate object with public implementation \a q.
 */
TestRenderTemplateResponsePrivate::TestRenderTemplateResponsePrivate(
    TestRenderTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses TestRenderTemplate response element from \a xml.
 */
void TestRenderTemplateResponsePrivate::parseTestRenderTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRenderTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
