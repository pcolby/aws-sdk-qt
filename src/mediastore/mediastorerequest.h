// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREREQUEST_H
#define QTAWS_MEDIASTOREREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediastoreglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaStore {

class MediaStoreRequestPrivate;

class QTAWSMEDIASTORE_EXPORT MediaStoreRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaStore.
    enum Action {
        CreateContainerAction,
        DeleteContainerAction,
        DeleteContainerPolicyAction,
        DeleteCorsPolicyAction,
        DeleteLifecyclePolicyAction,
        DeleteMetricPolicyAction,
        DescribeContainerAction,
        GetContainerPolicyAction,
        GetCorsPolicyAction,
        GetLifecyclePolicyAction,
        GetMetricPolicyAction,
        ListContainersAction,
        ListTagsForResourceAction,
        PutContainerPolicyAction,
        PutCorsPolicyAction,
        PutLifecyclePolicyAction,
        PutMetricPolicyAction,
        StartAccessLoggingAction,
        StopAccessLoggingAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaStoreRequest(const Action action);
    MediaStoreRequest(const MediaStoreRequest &other);
    MediaStoreRequest &operator=(const MediaStoreRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaStoreRequest &other) const;


protected:
    /// @cond internal
    explicit MediaStoreRequest(MediaStoreRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaStoreRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
