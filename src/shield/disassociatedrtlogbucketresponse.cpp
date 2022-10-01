// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedrtlogbucketresponse.h"
#include "disassociatedrtlogbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateDRTLogBucketResponse
 * \brief The DisassociateDRTLogBucketResponse class provides an interace for Shield DisassociateDRTLogBucket responses.
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
 * \sa ShieldClient::disassociateDRTLogBucket
 */

/*!
 * Constructs a DisassociateDRTLogBucketResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateDRTLogBucketResponse::DisassociateDRTLogBucketResponse(
        const DisassociateDRTLogBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisassociateDRTLogBucketResponsePrivate(this), parent)
{
    setRequest(new DisassociateDRTLogBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateDRTLogBucketRequest * DisassociateDRTLogBucketResponse::request() const
{
    Q_D(const DisassociateDRTLogBucketResponse);
    return static_cast<const DisassociateDRTLogBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DisassociateDRTLogBucket \a response.
 */
void DisassociateDRTLogBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateDRTLogBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisassociateDRTLogBucketResponsePrivate
 * \brief The DisassociateDRTLogBucketResponsePrivate class provides private implementation for DisassociateDRTLogBucketResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateDRTLogBucketResponsePrivate object with public implementation \a q.
 */
DisassociateDRTLogBucketResponsePrivate::DisassociateDRTLogBucketResponsePrivate(
    DisassociateDRTLogBucketResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisassociateDRTLogBucket response element from \a xml.
 */
void DisassociateDRTLogBucketResponsePrivate::parseDisassociateDRTLogBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDRTLogBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
