// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelpolicyresponse.h"
#include "deletechannelpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteChannelPolicyResponse
 * \brief The DeleteChannelPolicyResponse class provides an interace for MediaTailor DeleteChannelPolicy responses.
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
 * \sa MediaTailorClient::deleteChannelPolicy
 */

/*!
 * Constructs a DeleteChannelPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteChannelPolicyResponse::DeleteChannelPolicyResponse(
        const DeleteChannelPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DeleteChannelPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteChannelPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteChannelPolicyRequest * DeleteChannelPolicyResponse::request() const
{
    Q_D(const DeleteChannelPolicyResponse);
    return static_cast<const DeleteChannelPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DeleteChannelPolicy \a response.
 */
void DeleteChannelPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteChannelPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DeleteChannelPolicyResponsePrivate
 * \brief The DeleteChannelPolicyResponsePrivate class provides private implementation for DeleteChannelPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteChannelPolicyResponsePrivate object with public implementation \a q.
 */
DeleteChannelPolicyResponsePrivate::DeleteChannelPolicyResponsePrivate(
    DeleteChannelPolicyResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DeleteChannelPolicy response element from \a xml.
 */
void DeleteChannelPolicyResponsePrivate::parseDeleteChannelPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChannelPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
