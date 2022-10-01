// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourceresponse.h"
#include "tagresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::TagResourceResponse
 * \brief The TagResourceResponse class provides an interace for Inspector2 TagResource responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::tagResource
 */

/*!
 * Constructs a TagResourceResponse object for \a reply to \a request, with parent \a parent.
 */
TagResourceResponse::TagResourceResponse(
        const TagResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new TagResourceResponsePrivate(this), parent)
{
    setRequest(new TagResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagResourceRequest * TagResourceResponse::request() const
{
    Q_D(const TagResourceResponse);
    return static_cast<const TagResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 TagResource \a response.
 */
void TagResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::TagResourceResponsePrivate
 * \brief The TagResourceResponsePrivate class provides private implementation for TagResourceResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a TagResourceResponsePrivate object with public implementation \a q.
 */
TagResourceResponsePrivate::TagResourceResponsePrivate(
    TagResourceResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 TagResource response element from \a xml.
 */
void TagResourceResponsePrivate::parseTagResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
