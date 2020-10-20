/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
