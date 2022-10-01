// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrulegroupsnamespaceresponse.h"
#include "createrulegroupsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateRuleGroupsNamespaceResponse
 * \brief The CreateRuleGroupsNamespaceResponse class provides an interace for Amp CreateRuleGroupsNamespace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createRuleGroupsNamespace
 */

/*!
 * Constructs a CreateRuleGroupsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRuleGroupsNamespaceResponse::CreateRuleGroupsNamespaceResponse(
        const CreateRuleGroupsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new CreateRuleGroupsNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreateRuleGroupsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRuleGroupsNamespaceRequest * CreateRuleGroupsNamespaceResponse::request() const
{
    Q_D(const CreateRuleGroupsNamespaceResponse);
    return static_cast<const CreateRuleGroupsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp CreateRuleGroupsNamespace \a response.
 */
void CreateRuleGroupsNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRuleGroupsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::CreateRuleGroupsNamespaceResponsePrivate
 * \brief The CreateRuleGroupsNamespaceResponsePrivate class provides private implementation for CreateRuleGroupsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateRuleGroupsNamespaceResponsePrivate object with public implementation \a q.
 */
CreateRuleGroupsNamespaceResponsePrivate::CreateRuleGroupsNamespaceResponsePrivate(
    CreateRuleGroupsNamespaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp CreateRuleGroupsNamespace response element from \a xml.
 */
void CreateRuleGroupsNamespaceResponsePrivate::parseCreateRuleGroupsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRuleGroupsNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
