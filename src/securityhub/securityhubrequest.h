/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SECURITYHUBREQUEST_H
#define QTAWS_SECURITYHUBREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SecurityHub {

class SecurityHubRequestPrivate;

class QTAWS_EXPORT SecurityHubRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SecurityHub.
    enum Action {
        AcceptInvitationAction,
        BatchDisableStandardsAction,
        BatchEnableStandardsAction,
        BatchImportFindingsAction,
        CreateActionTargetAction,
        CreateInsightAction,
        CreateMembersAction,
        DeclineInvitationsAction,
        DeleteActionTargetAction,
        DeleteInsightAction,
        DeleteInvitationsAction,
        DeleteMembersAction,
        DescribeActionTargetsAction,
        DescribeHubAction,
        DescribeProductsAction,
        DisableImportFindingsForProductAction,
        DisableSecurityHubAction,
        DisassociateFromMasterAccountAction,
        DisassociateMembersAction,
        EnableImportFindingsForProductAction,
        EnableSecurityHubAction,
        GetEnabledStandardsAction,
        GetFindingsAction,
        GetInsightResultsAction,
        GetInsightsAction,
        GetInvitationsCountAction,
        GetMasterAccountAction,
        GetMembersAction,
        InviteMembersAction,
        ListEnabledProductsForImportAction,
        ListInvitationsAction,
        ListMembersAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateActionTargetAction,
        UpdateFindingsAction,
        UpdateInsightAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SecurityHubRequest(const Action action);
    SecurityHubRequest(const SecurityHubRequest &other);
    SecurityHubRequest &operator=(const SecurityHubRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SecurityHubRequest &other) const;


protected:
    /// @cond internal
    SecurityHubRequest(SecurityHubRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
