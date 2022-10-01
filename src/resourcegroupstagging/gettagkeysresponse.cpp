// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettagkeysresponse.h"
#include "gettagkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysResponse
 * \brief The GetTagKeysResponse class provides an interace for ResourceGroupsTagging GetTagKeys responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 *
 *
 * \sa ResourceGroupsTaggingClient::getTagKeys
 */

/*!
 * Constructs a GetTagKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagKeysResponse::GetTagKeysResponse(
        const GetTagKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingResponse(new GetTagKeysResponsePrivate(this), parent)
{
    setRequest(new GetTagKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagKeysRequest * GetTagKeysResponse::request() const
{
    Q_D(const GetTagKeysResponse);
    return static_cast<const GetTagKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTagging GetTagKeys \a response.
 */
void GetTagKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTagging::GetTagKeysResponsePrivate
 * \brief The GetTagKeysResponsePrivate class provides private implementation for GetTagKeysResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a GetTagKeysResponsePrivate object with public implementation \a q.
 */
GetTagKeysResponsePrivate::GetTagKeysResponsePrivate(
    GetTagKeysResponse * const q) : ResourceGroupsTaggingResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTagging GetTagKeys response element from \a xml.
 */
void GetTagKeysResponsePrivate::parseGetTagKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTagging
} // namespace QtAws
