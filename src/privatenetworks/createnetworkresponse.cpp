// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnetworkresponse.h"
#include "createnetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkResponse
 * \brief The CreateNetworkResponse class provides an interace for PrivateNetworks CreateNetwork responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::createNetwork
 */

/*!
 * Constructs a CreateNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNetworkResponse::CreateNetworkResponse(
        const CreateNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new CreateNetworkResponsePrivate(this), parent)
{
    setRequest(new CreateNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNetworkRequest * CreateNetworkResponse::request() const
{
    Q_D(const CreateNetworkResponse);
    return static_cast<const CreateNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks CreateNetwork \a response.
 */
void CreateNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::CreateNetworkResponsePrivate
 * \brief The CreateNetworkResponsePrivate class provides private implementation for CreateNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a CreateNetworkResponsePrivate object with public implementation \a q.
 */
CreateNetworkResponsePrivate::CreateNetworkResponsePrivate(
    CreateNetworkResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks CreateNetwork response element from \a xml.
 */
void CreateNetworkResponsePrivate::parseCreateNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
