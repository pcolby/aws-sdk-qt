// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcorenetworkresponse.h"
#include "createcorenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkResponse
 * \brief The CreateCoreNetworkResponse class provides an interace for NetworkManager CreateCoreNetwork responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::createCoreNetwork
 */

/*!
 * Constructs a CreateCoreNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreNetworkResponse::CreateCoreNetworkResponse(
        const CreateCoreNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new CreateCoreNetworkResponsePrivate(this), parent)
{
    setRequest(new CreateCoreNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreNetworkRequest * CreateCoreNetworkResponse::request() const
{
    Q_D(const CreateCoreNetworkResponse);
    return static_cast<const CreateCoreNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager CreateCoreNetwork \a response.
 */
void CreateCoreNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCoreNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::CreateCoreNetworkResponsePrivate
 * \brief The CreateCoreNetworkResponsePrivate class provides private implementation for CreateCoreNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a CreateCoreNetworkResponsePrivate object with public implementation \a q.
 */
CreateCoreNetworkResponsePrivate::CreateCoreNetworkResponsePrivate(
    CreateCoreNetworkResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager CreateCoreNetwork response element from \a xml.
 */
void CreateCoreNetworkResponsePrivate::parseCreateCoreNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
