// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishfunctionresponse.h"
#include "publishfunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::PublishFunctionResponse
 * \brief The PublishFunctionResponse class provides an interace for CloudFront PublishFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::publishFunction
 */

/*!
 * Constructs a PublishFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
PublishFunctionResponse::PublishFunctionResponse(
        const PublishFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new PublishFunctionResponsePrivate(this), parent)
{
    setRequest(new PublishFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishFunctionRequest * PublishFunctionResponse::request() const
{
    Q_D(const PublishFunctionResponse);
    return static_cast<const PublishFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront PublishFunction \a response.
 */
void PublishFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::PublishFunctionResponsePrivate
 * \brief The PublishFunctionResponsePrivate class provides private implementation for PublishFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a PublishFunctionResponsePrivate object with public implementation \a q.
 */
PublishFunctionResponsePrivate::PublishFunctionResponsePrivate(
    PublishFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront PublishFunction response element from \a xml.
 */
void PublishFunctionResponsePrivate::parsePublishFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
