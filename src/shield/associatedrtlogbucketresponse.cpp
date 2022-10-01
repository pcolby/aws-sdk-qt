// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedrtlogbucketresponse.h"
#include "associatedrtlogbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateDRTLogBucketResponse
 * \brief The AssociateDRTLogBucketResponse class provides an interace for Shield AssociateDRTLogBucket responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::associateDRTLogBucket
 */

/*!
 * Constructs a AssociateDRTLogBucketResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDRTLogBucketResponse::AssociateDRTLogBucketResponse(
        const AssociateDRTLogBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new AssociateDRTLogBucketResponsePrivate(this), parent)
{
    setRequest(new AssociateDRTLogBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDRTLogBucketRequest * AssociateDRTLogBucketResponse::request() const
{
    Q_D(const AssociateDRTLogBucketResponse);
    return static_cast<const AssociateDRTLogBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield AssociateDRTLogBucket \a response.
 */
void AssociateDRTLogBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDRTLogBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::AssociateDRTLogBucketResponsePrivate
 * \brief The AssociateDRTLogBucketResponsePrivate class provides private implementation for AssociateDRTLogBucketResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateDRTLogBucketResponsePrivate object with public implementation \a q.
 */
AssociateDRTLogBucketResponsePrivate::AssociateDRTLogBucketResponsePrivate(
    AssociateDRTLogBucketResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield AssociateDRTLogBucket response element from \a xml.
 */
void AssociateDRTLogBucketResponsePrivate::parseAssociateDRTLogBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDRTLogBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
