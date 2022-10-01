// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcepolicyresponse.h"
#include "deleteresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::DeleteResourcePolicyResponse
 * \brief The DeleteResourcePolicyResponse class provides an interace for NetworkManager DeleteResourcePolicy responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::deleteResourcePolicy
 */

/*!
 * Constructs a DeleteResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourcePolicyResponse::DeleteResourcePolicyResponse(
        const DeleteResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new DeleteResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourcePolicyRequest * DeleteResourcePolicyResponse::request() const
{
    Q_D(const DeleteResourcePolicyResponse);
    return static_cast<const DeleteResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager DeleteResourcePolicy \a response.
 */
void DeleteResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::DeleteResourcePolicyResponsePrivate
 * \brief The DeleteResourcePolicyResponsePrivate class provides private implementation for DeleteResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a DeleteResourcePolicyResponsePrivate object with public implementation \a q.
 */
DeleteResourcePolicyResponsePrivate::DeleteResourcePolicyResponsePrivate(
    DeleteResourcePolicyResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager DeleteResourcePolicy response element from \a xml.
 */
void DeleteResourcePolicyResponsePrivate::parseDeleteResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
