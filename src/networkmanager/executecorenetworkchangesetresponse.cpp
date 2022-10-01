// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "executecorenetworkchangesetresponse.h"
#include "executecorenetworkchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetResponse
 * \brief The ExecuteCoreNetworkChangeSetResponse class provides an interace for NetworkManager ExecuteCoreNetworkChangeSet responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::executeCoreNetworkChangeSet
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteCoreNetworkChangeSetResponse::ExecuteCoreNetworkChangeSetResponse(
        const ExecuteCoreNetworkChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new ExecuteCoreNetworkChangeSetResponsePrivate(this), parent)
{
    setRequest(new ExecuteCoreNetworkChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteCoreNetworkChangeSetRequest * ExecuteCoreNetworkChangeSetResponse::request() const
{
    Q_D(const ExecuteCoreNetworkChangeSetResponse);
    return static_cast<const ExecuteCoreNetworkChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager ExecuteCoreNetworkChangeSet \a response.
 */
void ExecuteCoreNetworkChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteCoreNetworkChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::ExecuteCoreNetworkChangeSetResponsePrivate
 * \brief The ExecuteCoreNetworkChangeSetResponsePrivate class provides private implementation for ExecuteCoreNetworkChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a ExecuteCoreNetworkChangeSetResponsePrivate object with public implementation \a q.
 */
ExecuteCoreNetworkChangeSetResponsePrivate::ExecuteCoreNetworkChangeSetResponsePrivate(
    ExecuteCoreNetworkChangeSetResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager ExecuteCoreNetworkChangeSet response element from \a xml.
 */
void ExecuteCoreNetworkChangeSetResponsePrivate::parseExecuteCoreNetworkChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteCoreNetworkChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
