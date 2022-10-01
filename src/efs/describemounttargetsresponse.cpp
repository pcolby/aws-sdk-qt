// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemounttargetsresponse.h"
#include "describemounttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeMountTargetsResponse
 * \brief The DescribeMountTargetsResponse class provides an interace for Efs DescribeMountTargets responses.
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
 * Parses a successful Efs DescribeMountTargets \a response.
 */
void DescribeMountTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMountTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeMountTargetsResponsePrivate
 * \brief The DescribeMountTargetsResponsePrivate class provides private implementation for DescribeMountTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeMountTargetsResponsePrivate object with public implementation \a q.
 */
DescribeMountTargetsResponsePrivate::DescribeMountTargetsResponsePrivate(
    DescribeMountTargetsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeMountTargets response element from \a xml.
 */
void DescribeMountTargetsResponsePrivate::parseDescribeMountTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
