// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestudioresponse.h"
#include "describestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DescribeStudioResponse
 * \brief The DescribeStudioResponse class provides an interace for Emr DescribeStudio responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStudio
 */

/*!
 * Constructs a DescribeStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStudioResponse::DescribeStudioResponse(
        const DescribeStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeStudioResponsePrivate(this), parent)
{
    setRequest(new DescribeStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStudioRequest * DescribeStudioResponse::request() const
{
    Q_D(const DescribeStudioResponse);
    return static_cast<const DescribeStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr DescribeStudio \a response.
 */
void DescribeStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::DescribeStudioResponsePrivate
 * \brief The DescribeStudioResponsePrivate class provides private implementation for DescribeStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DescribeStudioResponsePrivate object with public implementation \a q.
 */
DescribeStudioResponsePrivate::DescribeStudioResponsePrivate(
    DescribeStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr DescribeStudio response element from \a xml.
 */
void DescribeStudioResponsePrivate::parseDescribeStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
