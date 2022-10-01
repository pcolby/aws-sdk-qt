// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testfunctionresponse.h"
#include "testfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::TestFunctionResponse
 * \brief The TestFunctionResponse class provides an interace for CloudFront TestFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::testFunction
 */

/*!
 * Constructs a TestFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
TestFunctionResponse::TestFunctionResponse(
        const TestFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new TestFunctionResponsePrivate(this), parent)
{
    setRequest(new TestFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestFunctionRequest * TestFunctionResponse::request() const
{
    Q_D(const TestFunctionResponse);
    return static_cast<const TestFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront TestFunction \a response.
 */
void TestFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::TestFunctionResponsePrivate
 * \brief The TestFunctionResponsePrivate class provides private implementation for TestFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a TestFunctionResponsePrivate object with public implementation \a q.
 */
TestFunctionResponsePrivate::TestFunctionResponsePrivate(
    TestFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront TestFunction response element from \a xml.
 */
void TestFunctionResponsePrivate::parseTestFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
