// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSREQUEST_H
#define QTAWS_SYNTHETICSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssyntheticsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Synthetics {

class SyntheticsRequestPrivate;

class QTAWSSYNTHETICS_EXPORT SyntheticsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Synthetics.
    enum Action {
        AssociateResourceAction,
        CreateCanaryAction,
        CreateGroupAction,
        DeleteCanaryAction,
        DeleteGroupAction,
        DescribeCanariesAction,
        DescribeCanariesLastRunAction,
        DescribeRuntimeVersionsAction,
        DisassociateResourceAction,
        GetCanaryAction,
        GetCanaryRunsAction,
        GetGroupAction,
        ListAssociatedGroupsAction,
        ListGroupResourcesAction,
        ListGroupsAction,
        ListTagsForResourceAction,
        StartCanaryAction,
        StopCanaryAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCanaryAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SyntheticsRequest(const Action action);
    SyntheticsRequest(const SyntheticsRequest &other);
    SyntheticsRequest &operator=(const SyntheticsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SyntheticsRequest &other) const;


protected:
    /// @cond internal
    explicit SyntheticsRequest(SyntheticsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyntheticsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
