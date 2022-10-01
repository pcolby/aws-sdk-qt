// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresponseheaderspolicyresponse.h"
#include "createresponseheaderspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateResponseHeadersPolicyResponse
 * \brief The CreateResponseHeadersPolicyResponse class provides an interace for CloudFront CreateResponseHeadersPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createResponseHeadersPolicy
 */

/*!
 * Constructs a CreateResponseHeadersPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResponseHeadersPolicyResponse::CreateResponseHeadersPolicyResponse(
        const CreateResponseHeadersPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateResponseHeadersPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateResponseHeadersPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResponseHeadersPolicyRequest * CreateResponseHeadersPolicyResponse::request() const
{
    Q_D(const CreateResponseHeadersPolicyResponse);
    return static_cast<const CreateResponseHeadersPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateResponseHeadersPolicy \a response.
 */
void CreateResponseHeadersPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResponseHeadersPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateResponseHeadersPolicyResponsePrivate
 * \brief The CreateResponseHeadersPolicyResponsePrivate class provides private implementation for CreateResponseHeadersPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateResponseHeadersPolicyResponsePrivate object with public implementation \a q.
 */
CreateResponseHeadersPolicyResponsePrivate::CreateResponseHeadersPolicyResponsePrivate(
    CreateResponseHeadersPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateResponseHeadersPolicy response element from \a xml.
 */
void CreateResponseHeadersPolicyResponsePrivate::parseCreateResponseHeadersPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResponseHeadersPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
