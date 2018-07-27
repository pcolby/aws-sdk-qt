/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describemounttargetsresponse.h"
#include "describemounttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeMountTargetsResponse
 * \brief The DescribeMountTargetsResponse class provides an interace for EFS DescribeMountTargets responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EfsClient::describeMountTargets
 */

/*!
 * Constructs a DescribeMountTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMountTargetsResponse::DescribeMountTargetsResponse(
        const DescribeMountTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeMountTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeMountTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMountTargetsRequest * DescribeMountTargetsResponse::request() const
{
    Q_D(const DescribeMountTargetsResponse);
    return static_cast<const DescribeMountTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EFS DescribeMountTargets \a response.
 */
void DescribeMountTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMountTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeMountTargetsResponsePrivate
 * \brief The DescribeMountTargetsResponsePrivate class provides private implementation for DescribeMountTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeMountTargetsResponsePrivate object with public implementation \a q.
 */
DescribeMountTargetsResponsePrivate::DescribeMountTargetsResponsePrivate(
    DescribeMountTargetsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeMountTargets response element from \a xml.
 */
void DescribeMountTargetsResponsePrivate::parseDescribeMountTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
