// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyresponse.h"
#include "putresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::PutResourcePolicyResponse
 * \brief The PutResourcePolicyResponse class provides an interace for NetworkManager PutResourcePolicy responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::putResourcePolicy
 */

/*!
 * Constructs a PutResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourcePolicyResponse::PutResourcePolicyResponse(
        const PutResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new PutResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new PutResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourcePolicyRequest * PutResourcePolicyResponse::request() const
{
    Q_D(const PutResourcePolicyResponse);
    return static_cast<const PutResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager PutResourcePolicy \a response.
 */
void PutResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::PutResourcePolicyResponsePrivate
 * \brief The PutResourcePolicyResponsePrivate class provides private implementation for PutResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a PutResourcePolicyResponsePrivate object with public implementation \a q.
 */
PutResourcePolicyResponsePrivate::PutResourcePolicyResponsePrivate(
    PutResourcePolicyResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager PutResourcePolicy response element from \a xml.
 */
void PutResourcePolicyResponsePrivate::parsePutResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
