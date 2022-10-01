// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrulegroupsnamespaceresponse.h"
#include "putrulegroupsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::PutRuleGroupsNamespaceResponse
 * \brief The PutRuleGroupsNamespaceResponse class provides an interace for Amp PutRuleGroupsNamespace responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::putRuleGroupsNamespace
 */

/*!
 * Constructs a PutRuleGroupsNamespaceResponse object for \a reply to \a request, with parent \a parent.
 */
PutRuleGroupsNamespaceResponse::PutRuleGroupsNamespaceResponse(
        const PutRuleGroupsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new PutRuleGroupsNamespaceResponsePrivate(this), parent)
{
    setRequest(new PutRuleGroupsNamespaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRuleGroupsNamespaceRequest * PutRuleGroupsNamespaceResponse::request() const
{
    Q_D(const PutRuleGroupsNamespaceResponse);
    return static_cast<const PutRuleGroupsNamespaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp PutRuleGroupsNamespace \a response.
 */
void PutRuleGroupsNamespaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRuleGroupsNamespaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::PutRuleGroupsNamespaceResponsePrivate
 * \brief The PutRuleGroupsNamespaceResponsePrivate class provides private implementation for PutRuleGroupsNamespaceResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a PutRuleGroupsNamespaceResponsePrivate object with public implementation \a q.
 */
PutRuleGroupsNamespaceResponsePrivate::PutRuleGroupsNamespaceResponsePrivate(
    PutRuleGroupsNamespaceResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp PutRuleGroupsNamespace response element from \a xml.
 */
void PutRuleGroupsNamespaceResponsePrivate::parsePutRuleGroupsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRuleGroupsNamespaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
