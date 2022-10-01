// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMV2REQUEST_H
#define QTAWS_CLOUDHSMV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudhsmv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2RequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT CloudHsmV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudHsmV2.
    enum Action {
        CopyBackupToRegionAction,
        CreateClusterAction,
        CreateHsmAction,
        DeleteBackupAction,
        DeleteClusterAction,
        DeleteHsmAction,
        DescribeBackupsAction,
        DescribeClustersAction,
        InitializeClusterAction,
        ListTagsAction,
        ModifyBackupAttributesAction,
        ModifyClusterAction,
        RestoreBackupAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudHsmV2Request(const Action action);
    CloudHsmV2Request(const CloudHsmV2Request &other);
    CloudHsmV2Request &operator=(const CloudHsmV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudHsmV2Request &other) const;


protected:
    /// @cond internal
    explicit CloudHsmV2Request(CloudHsmV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudHsmV2Request)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
