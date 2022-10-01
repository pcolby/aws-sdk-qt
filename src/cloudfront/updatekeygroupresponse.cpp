// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatekeygroupresponse.h"
#include "updatekeygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupResponse
 * \brief The UpdateKeyGroupResponse class provides an interace for CloudFront UpdateKeyGroup responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::updateKeyGroup
 */

/*!
 * Constructs a UpdateKeyGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateKeyGroupResponse::UpdateKeyGroupResponse(
        const UpdateKeyGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateKeyGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateKeyGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateKeyGroupRequest * UpdateKeyGroupResponse::request() const
{
    Q_D(const UpdateKeyGroupResponse);
    return static_cast<const UpdateKeyGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront UpdateKeyGroup \a response.
 */
void UpdateKeyGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateKeyGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::UpdateKeyGroupResponsePrivate
 * \brief The UpdateKeyGroupResponsePrivate class provides private implementation for UpdateKeyGroupResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a UpdateKeyGroupResponsePrivate object with public implementation \a q.
 */
UpdateKeyGroupResponsePrivate::UpdateKeyGroupResponsePrivate(
    UpdateKeyGroupResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront UpdateKeyGroup response element from \a xml.
 */
void UpdateKeyGroupResponsePrivate::parseUpdateKeyGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateKeyGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
