// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlinkresponse.h"
#include "createlinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateLinkResponse
 * \brief The CreateLinkResponse class provides an interace for NetworkManager CreateLink responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createLink
 */

/*!
 * Constructs a CreateLinkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLinkResponse::CreateLinkResponse(
        const CreateLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateLinkResponsePrivate(this), parent)
{
    setRequest(new CreateLinkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLinkRequest * CreateLinkResponse::request() const
{
    Q_D(const CreateLinkResponse);
    return static_cast<const CreateLinkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateLink \a response.
 */
void CreateLinkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateLinkResponsePrivate
 * \brief The CreateLinkResponsePrivate class provides private implementation for CreateLinkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateLinkResponsePrivate object with public implementation \a q.
 */
CreateLinkResponsePrivate::CreateLinkResponsePrivate(
    CreateLinkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateLink response element from \a xml.
 */
void CreateLinkResponsePrivate::parseCreateLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLinkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
