// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOIDENTITYREQUEST_H
#define QTAWS_COGNITOIDENTITYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscognitoidentityglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CognitoIdentity {

class CognitoIdentityRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT CognitoIdentityRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CognitoIdentity.
    enum Action {
        CreateIdentityPoolAction,
        DeleteIdentitiesAction,
        DeleteIdentityPoolAction,
        DescribeIdentityAction,
        DescribeIdentityPoolAction,
        GetCredentialsForIdentityAction,
        GetIdAction,
        GetIdentityPoolRolesAction,
        GetOpenIdTokenAction,
        GetOpenIdTokenForDeveloperIdentityAction,
        GetPrincipalTagAttributeMapAction,
        ListIdentitiesAction,
        ListIdentityPoolsAction,
        ListTagsForResourceAction,
        LookupDeveloperIdentityAction,
        MergeDeveloperIdentitiesAction,
        SetIdentityPoolRolesAction,
        SetPrincipalTagAttributeMapAction,
        TagResourceAction,
        UnlinkDeveloperIdentityAction,
        UnlinkIdentityAction,
        UntagResourceAction,
        UpdateIdentityPoolAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CognitoIdentityRequest(const Action action);
    CognitoIdentityRequest(const CognitoIdentityRequest &other);
    CognitoIdentityRequest &operator=(const CognitoIdentityRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CognitoIdentityRequest &other) const;


protected:
    /// @cond internal
    explicit CognitoIdentityRequest(CognitoIdentityRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CognitoIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
