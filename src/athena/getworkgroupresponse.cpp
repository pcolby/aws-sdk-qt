// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkgroupresponse.h"
#include "getworkgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::GetWorkGroupResponse
 * \brief The GetWorkGroupResponse class provides an interace for Athena GetWorkGroup responses.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the Amazon Web Services SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::getWorkGroup
 */

/*!
 * Constructs a GetWorkGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkGroupResponse::GetWorkGroupResponse(
        const GetWorkGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new GetWorkGroupResponsePrivate(this), parent)
{
    setRequest(new GetWorkGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkGroupRequest * GetWorkGroupResponse::request() const
{
    Q_D(const GetWorkGroupResponse);
    return static_cast<const GetWorkGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Athena GetWorkGroup \a response.
 */
void GetWorkGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Athena::GetWorkGroupResponsePrivate
 * \brief The GetWorkGroupResponsePrivate class provides private implementation for GetWorkGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a GetWorkGroupResponsePrivate object with public implementation \a q.
 */
GetWorkGroupResponsePrivate::GetWorkGroupResponsePrivate(
    GetWorkGroupResponse * const q) : AthenaResponsePrivate(q)
{

}

/*!
 * Parses a Athena GetWorkGroup response element from \a xml.
 */
void GetWorkGroupResponsePrivate::parseGetWorkGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Athena
} // namespace QtAws
