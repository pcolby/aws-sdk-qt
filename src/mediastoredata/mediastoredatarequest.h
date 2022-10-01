// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATAREQUEST_H
#define QTAWS_MEDIASTOREDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediastoredataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataRequestPrivate;

class QTAWSMEDIASTOREDATA_EXPORT MediaStoreDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaStoreData.
    enum Action {
        DeleteObjectAction,
        DescribeObjectAction,
        GetObjectAction,
        ListItemsAction,
        PutObjectAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaStoreDataRequest(const Action action);
    MediaStoreDataRequest(const MediaStoreDataRequest &other);
    MediaStoreDataRequest &operator=(const MediaStoreDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaStoreDataRequest &other) const;


protected:
    /// @cond internal
    explicit MediaStoreDataRequest(MediaStoreDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaStoreDataRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
