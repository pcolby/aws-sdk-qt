// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelpolicyresponse.h"
#include "getchannelpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetChannelPolicyResponse
 * \brief The GetChannelPolicyResponse class provides an interace for MediaTailor GetChannelPolicy responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::getChannelPolicy
 */

/*!
 * Constructs a GetChannelPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelPolicyResponse::GetChannelPolicyResponse(
        const GetChannelPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new GetChannelPolicyResponsePrivate(this), parent)
{
    setRequest(new GetChannelPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelPolicyRequest * GetChannelPolicyResponse::request() const
{
    Q_D(const GetChannelPolicyResponse);
    return static_cast<const GetChannelPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor GetChannelPolicy \a response.
 */
void GetChannelPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::GetChannelPolicyResponsePrivate
 * \brief The GetChannelPolicyResponsePrivate class provides private implementation for GetChannelPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetChannelPolicyResponsePrivate object with public implementation \a q.
 */
GetChannelPolicyResponsePrivate::GetChannelPolicyResponsePrivate(
    GetChannelPolicyResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor GetChannelPolicy response element from \a xml.
 */
void GetChannelPolicyResponsePrivate::parseGetChannelPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
