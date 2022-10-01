// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkspacealiasresponse.h"
#include "updateworkspacealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::UpdateWorkspaceAliasResponse
 * \brief The UpdateWorkspaceAliasResponse class provides an interace for Amp UpdateWorkspaceAlias responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::updateWorkspaceAlias
 */

/*!
 * Constructs a UpdateWorkspaceAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkspaceAliasResponse::UpdateWorkspaceAliasResponse(
        const UpdateWorkspaceAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new UpdateWorkspaceAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkspaceAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkspaceAliasRequest * UpdateWorkspaceAliasResponse::request() const
{
    Q_D(const UpdateWorkspaceAliasResponse);
    return static_cast<const UpdateWorkspaceAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp UpdateWorkspaceAlias \a response.
 */
void UpdateWorkspaceAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkspaceAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::UpdateWorkspaceAliasResponsePrivate
 * \brief The UpdateWorkspaceAliasResponsePrivate class provides private implementation for UpdateWorkspaceAliasResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a UpdateWorkspaceAliasResponsePrivate object with public implementation \a q.
 */
UpdateWorkspaceAliasResponsePrivate::UpdateWorkspaceAliasResponsePrivate(
    UpdateWorkspaceAliasResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp UpdateWorkspaceAlias response element from \a xml.
 */
void UpdateWorkspaceAliasResponsePrivate::parseUpdateWorkspaceAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkspaceAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
