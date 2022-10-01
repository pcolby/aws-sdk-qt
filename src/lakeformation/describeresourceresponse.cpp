// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeresourceresponse.h"
#include "describeresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::DescribeResourceResponse
 * \brief The DescribeResourceResponse class provides an interace for LakeFormation DescribeResource responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::describeResource
 */

/*!
 * Constructs a DescribeResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeResourceResponse::DescribeResourceResponse(
        const DescribeResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new DescribeResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeResourceRequest * DescribeResourceResponse::request() const
{
    Q_D(const DescribeResourceResponse);
    return static_cast<const DescribeResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation DescribeResource \a response.
 */
void DescribeResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::DescribeResourceResponsePrivate
 * \brief The DescribeResourceResponsePrivate class provides private implementation for DescribeResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a DescribeResourceResponsePrivate object with public implementation \a q.
 */
DescribeResourceResponsePrivate::DescribeResourceResponsePrivate(
    DescribeResourceResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation DescribeResource response element from \a xml.
 */
void DescribeResourceResponsePrivate::parseDescribeResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
