// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefunctionresponse.h"
#include "updatefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateFunctionResponse
 * \brief The UpdateFunctionResponse class provides an interace for CloudFront UpdateFunction responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateFunction
 */

/*!
 * Constructs a UpdateFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFunctionResponse::UpdateFunctionResponse(
        const UpdateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFunctionRequest * UpdateFunctionResponse::request() const
{
    Q_D(const UpdateFunctionResponse);
    return static_cast<const UpdateFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateFunction \a response.
 */
void UpdateFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateFunctionResponsePrivate
 * \brief The UpdateFunctionResponsePrivate class provides private implementation for UpdateFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateFunctionResponsePrivate object with public implementation \a q.
 */
UpdateFunctionResponsePrivate::UpdateFunctionResponsePrivate(
    UpdateFunctionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateFunction response element from \a xml.
 */
void UpdateFunctionResponsePrivate::parseUpdateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
