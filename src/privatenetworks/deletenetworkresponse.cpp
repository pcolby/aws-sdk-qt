// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworkresponse.h"
#include "deletenetworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrivateNetworks {

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkResponse
 * \brief The DeleteNetworkResponse class provides an interace for PrivateNetworks DeleteNetwork responses.
 *
 * \inmodule QtAwsPrivateNetworks
 *
 *  Amazon Web Services Private 5G is a managed service that makes it easy to deploy, operate, and scale your own private
 *  mobile network at your on-premises location. Private 5G provides the pre-configured hardware and software for mobile
 *  networks, helps automate setup, and scales capacity on demand to support additional devices as
 *
 * \sa PrivateNetworksClient::deleteNetwork
 */

/*!
 * Constructs a DeleteNetworkResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkResponse::DeleteNetworkResponse(
        const DeleteNetworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrivateNetworksResponse(new DeleteNetworkResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkRequest * DeleteNetworkResponse::request() const
{
    Q_D(const DeleteNetworkResponse);
    return static_cast<const DeleteNetworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrivateNetworks DeleteNetwork \a response.
 */
void DeleteNetworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrivateNetworks::DeleteNetworkResponsePrivate
 * \brief The DeleteNetworkResponsePrivate class provides private implementation for DeleteNetworkResponse.
 * \internal
 *
 * \inmodule QtAwsPrivateNetworks
 */

/*!
 * Constructs a DeleteNetworkResponsePrivate object with public implementation \a q.
 */
DeleteNetworkResponsePrivate::DeleteNetworkResponsePrivate(
    DeleteNetworkResponse * const q) : PrivateNetworksResponsePrivate(q)
{

}

/*!
 * Parses a PrivateNetworks DeleteNetwork response element from \a xml.
 */
void DeleteNetworkResponsePrivate::parseDeleteNetworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrivateNetworks
} // namespace QtAws
