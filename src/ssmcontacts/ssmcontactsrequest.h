// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCONTACTSREQUEST_H
#define QTAWS_SSMCONTACTSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssmcontactsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SsmContacts {

class SsmContactsRequestPrivate;

class QTAWSSSMCONTACTS_EXPORT SsmContactsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SsmContacts.
    enum Action {
        AcceptPageAction,
        ActivateContactChannelAction,
        CreateContactAction,
        CreateContactChannelAction,
        DeactivateContactChannelAction,
        DeleteContactAction,
        DeleteContactChannelAction,
        DescribeEngagementAction,
        DescribePageAction,
        GetContactAction,
        GetContactChannelAction,
        GetContactPolicyAction,
        ListContactChannelsAction,
        ListContactsAction,
        ListEngagementsAction,
        ListPageReceiptsAction,
        ListPagesByContactAction,
        ListPagesByEngagementAction,
        ListTagsForResourceAction,
        PutContactPolicyAction,
        SendActivationCodeAction,
        StartEngagementAction,
        StopEngagementAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateContactAction,
        UpdateContactChannelAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsmContactsRequest(const Action action);
    SsmContactsRequest(const SsmContactsRequest &other);
    SsmContactsRequest &operator=(const SsmContactsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsmContactsRequest &other) const;


protected:
    /// @cond internal
    explicit SsmContactsRequest(SsmContactsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmContactsRequest)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
