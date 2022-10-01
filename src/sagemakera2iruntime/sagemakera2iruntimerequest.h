// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_H
#define QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssagemakera2iruntimeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeRequestPrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT SageMakerA2IRuntimeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SageMakerA2IRuntime.
    enum Action {
        DeleteHumanLoopAction,
        DescribeHumanLoopAction,
        ListHumanLoopsAction,
        StartHumanLoopAction,
        StopHumanLoopAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SageMakerA2IRuntimeRequest(const Action action);
    SageMakerA2IRuntimeRequest(const SageMakerA2IRuntimeRequest &other);
    SageMakerA2IRuntimeRequest &operator=(const SageMakerA2IRuntimeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SageMakerA2IRuntimeRequest &other) const;


protected:
    /// @cond internal
    explicit SageMakerA2IRuntimeRequest(SageMakerA2IRuntimeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SageMakerA2IRuntimeRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
