// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEREQUEST_H
#define QTAWS_FINSPACEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfinspaceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Finspace {

class FinspaceRequestPrivate;

class QTAWSFINSPACE_EXPORT FinspaceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Finspace.
    enum Action {
        CreateEnvironmentAction,
        DeleteEnvironmentAction,
        GetEnvironmentAction,
        ListEnvironmentsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEnvironmentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FinspaceRequest(const Action action);
    FinspaceRequest(const FinspaceRequest &other);
    FinspaceRequest &operator=(const FinspaceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FinspaceRequest &other) const;


protected:
    /// @cond internal
    explicit FinspaceRequest(FinspaceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinspaceRequest)

};

} // namespace Finspace
} // namespace QtAws

#endif
