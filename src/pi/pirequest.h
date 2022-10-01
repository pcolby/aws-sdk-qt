// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PIREQUEST_H
#define QTAWS_PIREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspiglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Pi {

class PiRequestPrivate;

class QTAWSPI_EXPORT PiRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Pi.
    enum Action {
        DescribeDimensionKeysAction,
        GetDimensionKeyDetailsAction,
        GetResourceMetadataAction,
        GetResourceMetricsAction,
        ListAvailableResourceDimensionsAction,
        ListAvailableResourceMetricsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PiRequest(const Action action);
    PiRequest(const PiRequest &other);
    PiRequest &operator=(const PiRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PiRequest &other) const;


protected:
    /// @cond internal
    explicit PiRequest(PiRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PiRequest)

};

} // namespace Pi
} // namespace QtAws

#endif
