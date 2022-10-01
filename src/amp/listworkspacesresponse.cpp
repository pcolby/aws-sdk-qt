// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkspacesresponse.h"
#include "listworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::ListWorkspacesResponse
 * \brief The ListWorkspacesResponse class provides an interace for Amp ListWorkspaces responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::listWorkspaces
 */

/*!
 * Constructs a ListWorkspacesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkspacesResponse::ListWorkspacesResponse(
        const ListWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new ListWorkspacesResponsePrivate(this), parent)
{
    setRequest(new ListWorkspacesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkspacesRequest * ListWorkspacesResponse::request() const
{
    Q_D(const ListWorkspacesResponse);
    return static_cast<const ListWorkspacesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp ListWorkspaces \a response.
 */
void ListWorkspacesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkspacesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::ListWorkspacesResponsePrivate
 * \brief The ListWorkspacesResponsePrivate class provides private implementation for ListWorkspacesResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a ListWorkspacesResponsePrivate object with public implementation \a q.
 */
ListWorkspacesResponsePrivate::ListWorkspacesResponsePrivate(
    ListWorkspacesResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp ListWorkspaces response element from \a xml.
 */
void ListWorkspacesResponsePrivate::parseListWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkspacesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
