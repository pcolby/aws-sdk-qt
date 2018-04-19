/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    Q_D(TestRoleResponse);
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
    /// @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
