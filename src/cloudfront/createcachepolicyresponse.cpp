// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcachepolicyresponse.h"
#include "createcachepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateCachePolicyResponse
 * \brief The CreateCachePolicyResponse class provides an interace for CloudFront CreateCachePolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createCachePolicy
 */

/*!
 * Constructs a CreateCachePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCachePolicyResponse::CreateCachePolicyResponse(
        const CreateCachePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateCachePolicyResponsePrivate(this), parent)
{
    setRequest(new CreateCachePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCachePolicyRequest * CreateCachePolicyResponse::request() const
{
    Q_D(const CreateCachePolicyResponse);
    return static_cast<const CreateCachePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateCachePolicy \a response.
 */
void CreateCachePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCachePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateCachePolicyResponsePrivate
 * \brief The CreateCachePolicyResponsePrivate class provides private implementation for CreateCachePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateCachePolicyResponsePrivate object with public implementation \a q.
 */
CreateCachePolicyResponsePrivate::CreateCachePolicyResponsePrivate(
    CreateCachePolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateCachePolicy response element from \a xml.
 */
void CreateCachePolicyResponsePrivate::parseCreateCachePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCachePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
