// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTQUERYREQUEST_H
#define QTAWS_FORECASTQUERYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsforecastqueryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ForecastQuery {

class ForecastQueryRequestPrivate;

class QTAWSFORECASTQUERY_EXPORT ForecastQueryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ForecastQuery.
    enum Action {
        QueryForecastAction,
        QueryWhatIfForecastAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ForecastQueryRequest(const Action action);
    ForecastQueryRequest(const ForecastQueryRequest &other);
    ForecastQueryRequest &operator=(const ForecastQueryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ForecastQueryRequest &other) const;


protected:
    /// @cond internal
    explicit ForecastQueryRequest(ForecastQueryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForecastQueryRequest)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
