// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODREQUEST_H
#define QTAWS_MEDIAPACKAGEVODREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediapackagevodglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT MediaPackageVodRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaPackageVod.
    enum Action {
        ConfigureLogsAction,
        CreateAssetAction,
        CreatePackagingConfigurationAction,
        CreatePackagingGroupAction,
        DeleteAssetAction,
        DeletePackagingConfigurationAction,
        DeletePackagingGroupAction,
        DescribeAssetAction,
        DescribePackagingConfigurationAction,
        DescribePackagingGroupAction,
        ListAssetsAction,
        ListPackagingConfigurationsAction,
        ListPackagingGroupsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdatePackagingGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaPackageVodRequest(const Action action);
    MediaPackageVodRequest(const MediaPackageVodRequest &other);
    MediaPackageVodRequest &operator=(const MediaPackageVodRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaPackageVodRequest &other) const;


protected:
    /// @cond internal
    explicit MediaPackageVodRequest(MediaPackageVodRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaPackageVodRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
