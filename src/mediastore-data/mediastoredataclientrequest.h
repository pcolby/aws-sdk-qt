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

#ifndef QTAWS_MEDIASTOREDATACLIENTREQUEST_H
#define QTAWS_MEDIASTOREDATACLIENTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace AWS {

namespace MediaStoreData {

class AwsAbstractClient;
class MediaStoreDataClientRequestPrivate;

class QTAWS_EXPORT MediaStoreDataClientRequest : public AwsAbstractRequest {

public:
    /// Actions supported by MediaStoreData.
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaStoreDataClientRequest(const Action action);
    MediaStoreDataClientRequest(const MediaStoreDataClientRequest &other);
    MediaStoreDataClientRequest &operator=(const MediaStoreDataClientRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaStoreDataClientRequest &other) const;


protected:
    /// @cond internal
    MediaStoreDataClientRequest(MediaStoreDataClientRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE(MediaStoreDataClientRequest)

}

} // namespace MediaStoreData
} // namespace AWS

#endif
