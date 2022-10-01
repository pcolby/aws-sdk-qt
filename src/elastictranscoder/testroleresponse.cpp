// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testroleresponse.h"
#include "testroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::TestRoleResponse
 * \brief The TestRoleResponse class provides an interace for ElasticTranscoder TestRole responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::testRole
 */

/*!
 * Constructs a TestRoleResponse object for \a reply to \a request, with parent \a parent.
 */
TestRoleResponse::TestRoleResponse(
        const TestRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new TestRoleResponsePrivate(this), parent)
{
    setRequest(new TestRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestRoleRequest * TestRoleResponse::request() const
{
    Q_D(const TestRoleResponse);
    return static_cast<const TestRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder TestRole \a response.
 */
void TestRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::TestRoleResponsePrivate
 * \brief The TestRoleResponsePrivate class provides private implementation for TestRoleResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a TestRoleResponsePrivate object with public implementation \a q.
 */
TestRoleResponsePrivate::TestRoleResponsePrivate(
    TestRoleResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder TestRole response element from \a xml.
 */
void TestRoleResponsePrivate::parseTestRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
