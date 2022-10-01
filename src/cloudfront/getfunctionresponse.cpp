// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfunctionresponse.h"
#include "getfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFunctionResponse
 * \brief The GetFunctionResponse class provides an interace for CloudFront GetFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFunction
 */

/*!
 * Constructs a GetFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionResponse::GetFunctionResponse(
        const GetFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFunctionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionRequest * GetFunctionResponse::request() const
{
    Q_D(const GetFunctionResponse);
    return static_cast<const GetFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFunction \a response.
 */
void GetFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFunctionResponsePrivate
 * \brief The GetFunctionResponsePrivate class provides private implementation for GetFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFunctionResponsePrivate object with public implementation \a q.
 */
GetFunctionResponsePrivate::GetFunctionResponsePrivate(
    GetFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFunction response element from \a xml.
 */
void GetFunctionResponsePrivate::parseGetFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
