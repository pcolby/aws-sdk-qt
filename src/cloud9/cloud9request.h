// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9REQUEST_H
#define QTAWS_CLOUD9REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloud9global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Cloud9 {

class Cloud9RequestPrivate;

class QTAWSCLOUD9_EXPORT Cloud9Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Cloud9.
    enum Action {
        CreateEnvironmentEC2Action,
        CreateEnvironmentMembershipAction,
        DeleteEnvironmentAction,
        DeleteEnvironmentMembershipAction,
        DescribeEnvironmentMembershipsAction,
        DescribeEnvironmentStatusAction,
        DescribeEnvironmentsAction,
        ListEnvironmentsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEnvironmentAction,
        UpdateEnvironmentMembershipAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Cloud9Request(const Action action);
    Cloud9Request(const Cloud9Request &other);
    Cloud9Request &operator=(const Cloud9Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Cloud9Request &other) const;


protected:
    /// @cond internal
    explicit Cloud9Request(Cloud9RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Cloud9Request)

};

} // namespace Cloud9
} // namespace QtAws

#endif
