// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMREQUEST_H
#define QTAWS_RUMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrumglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Rum {

class RumRequestPrivate;

class QTAWSRUM_EXPORT RumRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Rum.
    enum Action {
        CreateAppMonitorAction,
        DeleteAppMonitorAction,
        GetAppMonitorAction,
        GetAppMonitorDataAction,
        ListAppMonitorsAction,
        ListTagsForResourceAction,
        PutRumEventsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAppMonitorAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RumRequest(const Action action);
    RumRequest(const RumRequest &other);
    RumRequest &operator=(const RumRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RumRequest &other) const;


protected:
    /// @cond internal
    explicit RumRequest(RumRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RumRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
