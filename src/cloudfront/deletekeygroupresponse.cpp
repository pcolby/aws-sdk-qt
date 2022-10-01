// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletekeygroupresponse.h"
#include "deletekeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupResponse
 * \brief The DeleteKeyGroupResponse class provides an interace for CloudFront DeleteKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteKeyGroup
 */

/*!
 * Constructs a DeleteKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteKeyGroupResponse::DeleteKeyGroupResponse(
        const DeleteKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteKeyGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteKeyGroupRequest * DeleteKeyGroupResponse::request() const
{
    Q_D(const DeleteKeyGroupResponse);
    return static_cast<const DeleteKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteKeyGroup \a response.
 */
void DeleteKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteKeyGroupResponsePrivate
 * \brief The DeleteKeyGroupResponsePrivate class provides private implementation for DeleteKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteKeyGroupResponsePrivate object with public implementation \a q.
 */
DeleteKeyGroupResponsePrivate::DeleteKeyGroupResponsePrivate(
    DeleteKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteKeyGroup response element from \a xml.
 */
void DeleteKeyGroupResponsePrivate::parseDeleteKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
