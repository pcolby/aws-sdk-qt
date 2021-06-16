/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_MANAGEDBLOCKCHAINREQUEST_H
#define QTAWS_MANAGEDBLOCKCHAINREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainRequestPrivate;

class QTAWS_EXPORT ManagedBlockchainRequest : public QtAws::Core::AwsAbstractRequest {

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
        RejectInvitationAction,
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
    ManagedBlockchainRequest(ManagedBlockchainRequestPrivate * const d);
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
