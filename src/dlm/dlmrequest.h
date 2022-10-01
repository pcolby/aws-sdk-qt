// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DLMREQUEST_H
#define QTAWS_DLMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdlmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Dlm {

class DlmRequestPrivate;

class QTAWSDLM_EXPORT DlmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Dlm.
    enum Action {
        CreateLifecyclePolicyAction,
        DeleteLifecyclePolicyAction,
        GetLifecyclePoliciesAction,
        GetLifecyclePolicyAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateLifecyclePolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DlmRequest(const Action action);
    DlmRequest(const DlmRequest &other);
    DlmRequest &operator=(const DlmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DlmRequest &other) const;


protected:
    /// @cond internal
    explicit DlmRequest(DlmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DlmRequest)

};

} // namespace Dlm
} // namespace QtAws

#endif
