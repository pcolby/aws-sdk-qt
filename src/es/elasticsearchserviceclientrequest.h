/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICSEARCHSERVICECLIENTREQUEST_H
#define QTAWS_ELASTICSEARCHSERVICECLIENTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace AWS {

namespace ElasticsearchService {

class AwsAbstractClient;
class ElasticsearchServiceClientRequestPrivate;

class QTAWS_EXPORT ElasticsearchServiceClientRequest : public AwsAbstractRequest {

public:
    /// Actions supported by .
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticsearchServiceClientRequest(const Action action);
    ElasticsearchServiceClientRequest(const ElasticsearchServiceClientRequest &other);
    ElasticsearchServiceClientRequest &operator=(const ElasticsearchServiceClientRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticsearchServiceClientRequest &other) const;


protected:
    /// @cond internal
    ElasticsearchServiceClientRequest(ElasticsearchServiceClientRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(ElasticsearchServiceClientRequest)

}

} // namespace ElasticsearchService
} // namespace AWS

#endif
