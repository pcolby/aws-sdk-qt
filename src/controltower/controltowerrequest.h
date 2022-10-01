// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTROLTOWERREQUEST_H
#define QTAWS_CONTROLTOWERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscontroltowerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ControlTower {

class ControlTowerRequestPrivate;

class QTAWSCONTROLTOWER_EXPORT ControlTowerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ControlTower.
    enum Action {
        DisableControlAction,
        EnableControlAction,
        GetControlOperationAction,
        ListEnabledControlsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ControlTowerRequest(const Action action);
    ControlTowerRequest(const ControlTowerRequest &other);
    ControlTowerRequest &operator=(const ControlTowerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ControlTowerRequest &other) const;


protected:
    /// @cond internal
    explicit ControlTowerRequest(ControlTowerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ControlTowerRequest)

};

} // namespace ControlTower
} // namespace QtAws

#endif
