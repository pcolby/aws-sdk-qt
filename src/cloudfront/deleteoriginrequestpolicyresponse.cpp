// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoriginrequestpolicyresponse.h"
#include "deleteoriginrequestpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteOriginRequestPolicyResponse
 * \brief The DeleteOriginRequestPolicyResponse class provides an interace for CloudFront DeleteOriginRequestPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteOriginRequestPolicy
 */

/*!
 * Constructs a DeleteOriginRequestPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOriginRequestPolicyResponse::DeleteOriginRequestPolicyResponse(
        const DeleteOriginRequestPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteOriginRequestPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteOriginRequestPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOriginRequestPolicyRequest * DeleteOriginRequestPolicyResponse::request() const
{
    Q_D(const DeleteOriginRequestPolicyResponse);
    return static_cast<const DeleteOriginRequestPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteOriginRequestPolicy \a response.
 */
void DeleteOriginRequestPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOriginRequestPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteOriginRequestPolicyResponsePrivate
 * \brief The DeleteOriginRequestPolicyResponsePrivate class provides private implementation for DeleteOriginRequestPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteOriginRequestPolicyResponsePrivate object with public implementation \a q.
 */
DeleteOriginRequestPolicyResponsePrivate::DeleteOriginRequestPolicyResponsePrivate(
    DeleteOriginRequestPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteOriginRequestPolicy response element from \a xml.
 */
void DeleteOriginRequestPolicyResponsePrivate::parseDeleteOriginRequestPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOriginRequestPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
