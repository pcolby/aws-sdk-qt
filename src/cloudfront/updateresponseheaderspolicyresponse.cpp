// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateresponseheaderspolicyresponse.h"
#include "updateresponseheaderspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateResponseHeadersPolicyResponse
 * \brief The UpdateResponseHeadersPolicyResponse class provides an interace for CloudFront UpdateResponseHeadersPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateResponseHeadersPolicy
 */

/*!
 * Constructs a UpdateResponseHeadersPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResponseHeadersPolicyResponse::UpdateResponseHeadersPolicyResponse(
        const UpdateResponseHeadersPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateResponseHeadersPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateResponseHeadersPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResponseHeadersPolicyRequest * UpdateResponseHeadersPolicyResponse::request() const
{
    Q_D(const UpdateResponseHeadersPolicyResponse);
    return static_cast<const UpdateResponseHeadersPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateResponseHeadersPolicy \a response.
 */
void UpdateResponseHeadersPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResponseHeadersPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateResponseHeadersPolicyResponsePrivate
 * \brief The UpdateResponseHeadersPolicyResponsePrivate class provides private implementation for UpdateResponseHeadersPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateResponseHeadersPolicyResponsePrivate object with public implementation \a q.
 */
UpdateResponseHeadersPolicyResponsePrivate::UpdateResponseHeadersPolicyResponsePrivate(
    UpdateResponseHeadersPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateResponseHeadersPolicy response element from \a xml.
 */
void UpdateResponseHeadersPolicyResponsePrivate::parseUpdateResponseHeadersPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResponseHeadersPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
