// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccountpreferencesresponse.h"
#include "describeaccountpreferencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeAccountPreferencesResponse
 * \brief The DescribeAccountPreferencesResponse class provides an interace for Efs DescribeAccountPreferences responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
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
    Q_D(const DescribeAccountPreferencesResponse);
    return static_cast<const DescribeAccountPreferencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeAccountPreferences \a response.
 */
void DescribeAccountPreferencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccountPreferencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeAccountPreferencesResponsePrivate
 * \brief The DescribeAccountPreferencesResponsePrivate class provides private implementation for DescribeAccountPreferencesResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeAccountPreferencesResponsePrivate object with public implementation \a q.
 */
DescribeAccountPreferencesResponsePrivate::DescribeAccountPreferencesResponsePrivate(
    DescribeAccountPreferencesResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeAccountPreferences response element from \a xml.
 */
void DescribeAccountPreferencesResponsePrivate::parseDescribeAccountPreferencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountPreferencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
