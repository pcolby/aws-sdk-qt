/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
