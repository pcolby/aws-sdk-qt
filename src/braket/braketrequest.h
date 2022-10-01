// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BRAKETREQUEST_H
#define QTAWS_BRAKETREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsbraketglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Braket {

class BraketRequestPrivate;

class QTAWSBRAKET_EXPORT BraketRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Braket.
    enum Action {
        CancelJobAction,
        CancelQuantumTaskAction,
        CreateJobAction,
        CreateQuantumTaskAction,
        GetDeviceAction,
        GetJobAction,
        GetQuantumTaskAction,
        ListTagsForResourceAction,
        SearchDevicesAction,
        SearchJobsAction,
        SearchQuantumTasksAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    BraketRequest(const Action action);
    BraketRequest(const BraketRequest &other);
    BraketRequest &operator=(const BraketRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const BraketRequest &other) const;


protected:
    /// @cond internal
    explicit BraketRequest(BraketRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BraketRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
