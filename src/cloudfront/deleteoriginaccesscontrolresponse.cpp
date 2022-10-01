// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteoriginaccesscontrolresponse.h"
#include "deleteoriginaccesscontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteOriginAccessControlResponse
 * \brief The DeleteOriginAccessControlResponse class provides an interace for CloudFront DeleteOriginAccessControl responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteOriginAccessControl
 */

/*!
 * Constructs a DeleteOriginAccessControlResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOriginAccessControlResponse::DeleteOriginAccessControlResponse(
        const DeleteOriginAccessControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteOriginAccessControlResponsePrivate(this), parent)
{
    setRequest(new DeleteOriginAccessControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOriginAccessControlRequest * DeleteOriginAccessControlResponse::request() const
{
    Q_D(const DeleteOriginAccessControlResponse);
    return static_cast<const DeleteOriginAccessControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteOriginAccessControl \a response.
 */
void DeleteOriginAccessControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOriginAccessControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteOriginAccessControlResponsePrivate
 * \brief The DeleteOriginAccessControlResponsePrivate class provides private implementation for DeleteOriginAccessControlResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteOriginAccessControlResponsePrivate object with public implementation \a q.
 */
DeleteOriginAccessControlResponsePrivate::DeleteOriginAccessControlResponsePrivate(
    DeleteOriginAccessControlResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteOriginAccessControl response element from \a xml.
 */
void DeleteOriginAccessControlResponsePrivate::parseDeleteOriginAccessControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOriginAccessControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
