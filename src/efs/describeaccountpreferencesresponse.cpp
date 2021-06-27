/*
    Copyright 2013-2021 Paul Colby

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

#include "describeaccountpreferencesresponse.h"
#include "describeaccountpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeAccountPreferencesResponse
 * \brief The DescribeAccountPreferencesResponse class provides an interace for EFS DescribeAccountPreferences responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 *
 * \sa EfsClient::describeAccountPreferences
 */

/*!
 * Constructs a DescribeAccountPreferencesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccountPreferencesResponse::DescribeAccountPreferencesResponse(
        const DescribeAccountPreferencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeAccountPreferencesResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountPreferencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccountPreferencesRequest * DescribeAccountPreferencesResponse::request() const
{
    return static_cast<const DescribeAccountPreferencesRequest *>(EfsResponse::request());
}

/*!
 * \reimp
 * Parses a successful EFS DescribeAccountPreferences \a response.
 */
void DescribeAccountPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeAccountPreferencesResponsePrivate
 * \brief The DescribeAccountPreferencesResponsePrivate class provides private implementation for DescribeAccountPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeAccountPreferencesResponsePrivate object with public implementation \a q.
 */
DescribeAccountPreferencesResponsePrivate::DescribeAccountPreferencesResponsePrivate(
    DescribeAccountPreferencesResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeAccountPreferences response element from \a xml.
 */
void DescribeAccountPreferencesResponsePrivate::parseDescribeAccountPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
