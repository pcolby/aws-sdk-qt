// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeenginedefaultclusterparametersresponse.h"
#include "describeenginedefaultclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEngineDefaultClusterParametersResponse
 * \brief The DescribeEngineDefaultClusterParametersResponse class provides an interace for DocDb DescribeEngineDefaultClusterParameters responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEngineDefaultClusterParameters
 */

/*!
 * Constructs a DescribeEngineDefaultClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngineDefaultClusterParametersResponse::DescribeEngineDefaultClusterParametersResponse(
        const DescribeEngineDefaultClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeEngineDefaultClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineDefaultClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngineDefaultClusterParametersRequest * DescribeEngineDefaultClusterParametersResponse::request() const
{
    Q_D(const DescribeEngineDefaultClusterParametersResponse);
    return static_cast<const DescribeEngineDefaultClusterParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeEngineDefaultClusterParameters \a response.
 */
void DescribeEngineDefaultClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngineDefaultClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeEngineDefaultClusterParametersResponsePrivate
 * \brief The DescribeEngineDefaultClusterParametersResponsePrivate class provides private implementation for DescribeEngineDefaultClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEngineDefaultClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeEngineDefaultClusterParametersResponsePrivate::DescribeEngineDefaultClusterParametersResponsePrivate(
    DescribeEngineDefaultClusterParametersResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeEngineDefaultClusterParameters response element from \a xml.
 */
void DescribeEngineDefaultClusterParametersResponsePrivate::parseDescribeEngineDefaultClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
