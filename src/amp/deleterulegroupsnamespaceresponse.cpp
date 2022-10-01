// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterulegroupsnamespaceresponse.h"
#include "deleterulegroupsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteRuleGroupsNamespaceResponse
 * \brief The DeleteRuleGroupsNamespaceResponse class provides an interace for Amp DeleteRuleGroupsNamespace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteRuleGroupsNamespace
 */

/*!
 * Constructs a DeleteRuleGroupsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRuleGroupsNamespaceResponse::DeleteRuleGroupsNamespaceResponse(
        const DeleteRuleGroupsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DeleteRuleGroupsNamespaceResponsePrivate(this), parent)
{
    setRequest(new DeleteRuleGroupsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRuleGroupsNamespaceRequest * DeleteRuleGroupsNamespaceResponse::request() const
{
    Q_D(const DeleteRuleGroupsNamespaceResponse);
    return static_cast<const DeleteRuleGroupsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DeleteRuleGroupsNamespace \a response.
 */
void DeleteRuleGroupsNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRuleGroupsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DeleteRuleGroupsNamespaceResponsePrivate
 * \brief The DeleteRuleGroupsNamespaceResponsePrivate class provides private implementation for DeleteRuleGroupsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteRuleGroupsNamespaceResponsePrivate object with public implementation \a q.
 */
DeleteRuleGroupsNamespaceResponsePrivate::DeleteRuleGroupsNamespaceResponsePrivate(
    DeleteRuleGroupsNamespaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DeleteRuleGroupsNamespace response element from \a xml.
 */
void DeleteRuleGroupsNamespaceResponsePrivate::parseDeleteRuleGroupsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRuleGroupsNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
