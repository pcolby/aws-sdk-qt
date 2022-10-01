// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinvalidationresponse.h"
#include "getinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetInvalidationResponse
 * \brief The GetInvalidationResponse class provides an interace for CloudFront GetInvalidation responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getInvalidation
 */

/*!
 * Constructs a GetInvalidationResponse object for \a reply to \a request, with parent \a parent.
 */
GetInvalidationResponse::GetInvalidationResponse(
        const GetInvalidationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetInvalidationResponsePrivate(this), parent)
{
    setRequest(new GetInvalidationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInvalidationRequest * GetInvalidationResponse::request() const
{
    Q_D(const GetInvalidationResponse);
    return static_cast<const GetInvalidationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetInvalidation \a response.
 */
void GetInvalidationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInvalidationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetInvalidationResponsePrivate
 * \brief The GetInvalidationResponsePrivate class provides private implementation for GetInvalidationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetInvalidationResponsePrivate object with public implementation \a q.
 */
GetInvalidationResponsePrivate::GetInvalidationResponsePrivate(
    GetInvalidationResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetInvalidation response element from \a xml.
 */
void GetInvalidationResponsePrivate::parseGetInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvalidationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
