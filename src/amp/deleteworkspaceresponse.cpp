// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkspaceresponse.h"
#include "deleteworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteWorkspaceResponse
 * \brief The DeleteWorkspaceResponse class provides an interace for Amp DeleteWorkspace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteWorkspace
 */

/*!
 * Constructs a DeleteWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkspaceResponse::DeleteWorkspaceResponse(
        const DeleteWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DeleteWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkspaceRequest * DeleteWorkspaceResponse::request() const
{
    Q_D(const DeleteWorkspaceResponse);
    return static_cast<const DeleteWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DeleteWorkspace \a response.
 */
void DeleteWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DeleteWorkspaceResponsePrivate
 * \brief The DeleteWorkspaceResponsePrivate class provides private implementation for DeleteWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteWorkspaceResponsePrivate object with public implementation \a q.
 */
DeleteWorkspaceResponsePrivate::DeleteWorkspaceResponsePrivate(
    DeleteWorkspaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DeleteWorkspace response element from \a xml.
 */
void DeleteWorkspaceResponsePrivate::parseDeleteWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
