// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateoriginaccesscontrolresponse.h"
#include "updateoriginaccesscontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlResponse
 * \brief The UpdateOriginAccessControlResponse class provides an interace for CloudFront UpdateOriginAccessControl responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateOriginAccessControl
 */

/*!
 * Constructs a UpdateOriginAccessControlResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateOriginAccessControlResponse::UpdateOriginAccessControlResponse(
        const UpdateOriginAccessControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateOriginAccessControlResponsePrivate(this), parent)
{
    setRequest(new UpdateOriginAccessControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateOriginAccessControlRequest * UpdateOriginAccessControlResponse::request() const
{
    Q_D(const UpdateOriginAccessControlResponse);
    return static_cast<const UpdateOriginAccessControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateOriginAccessControl \a response.
 */
void UpdateOriginAccessControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateOriginAccessControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateOriginAccessControlResponsePrivate
 * \brief The UpdateOriginAccessControlResponsePrivate class provides private implementation for UpdateOriginAccessControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateOriginAccessControlResponsePrivate object with public implementation \a q.
 */
UpdateOriginAccessControlResponsePrivate::UpdateOriginAccessControlResponsePrivate(
    UpdateOriginAccessControlResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateOriginAccessControl response element from \a xml.
 */
void UpdateOriginAccessControlResponsePrivate::parseUpdateOriginAccessControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateOriginAccessControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
