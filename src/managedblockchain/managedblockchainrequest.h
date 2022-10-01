// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINREQUEST_H
#define QTAWS_MANAGEDBLOCKCHAINREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmanagedblockchainglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainRequestPrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ManagedBlockchainRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ManagedBlockchain.
    enum Action {
        CreateMemberAction,
        CreateNetworkAction,
        CreateNodeAction,
        CreateProposalAction,
        DeleteMemberAction,
        DeleteNodeAction,
        GetMemberAction,
        GetNetworkAction,
        GetNodeAction,
        GetProposalAction,
        ListInvitationsAction,
        ListMembersAction,
        ListNetworksAction,
        ListNodesAction,
        ListProposalVotesAction,
        ListProposalsAction,
        ListTagsForResourceAction,
        RejectInvitationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateMemberAction,
        UpdateNodeAction,
        VoteOnProposalAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ManagedBlockchainRequest(const Action action);
    ManagedBlockchainRequest(const ManagedBlockchainRequest &other);
    ManagedBlockchainRequest &operator=(const ManagedBlockchainRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ManagedBlockchainRequest &other) const;


protected:
    /// @cond internal
    explicit ManagedBlockchainRequest(ManagedBlockchainRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ManagedBlockchainRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
