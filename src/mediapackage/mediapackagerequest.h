// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEREQUEST_H
#define QTAWS_MEDIAPACKAGEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediapackageglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaPackage {

class MediaPackageRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT MediaPackageRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaPackage.
    enum Action {
        ConfigureLogsAction,
        CreateChannelAction,
        CreateHarvestJobAction,
        CreateOriginEndpointAction,
        DeleteChannelAction,
        DeleteOriginEndpointAction,
        DescribeChannelAction,
        DescribeHarvestJobAction,
        DescribeOriginEndpointAction,
        ListChannelsAction,
        ListHarvestJobsAction,
        ListOriginEndpointsAction,
        ListTagsForResourceAction,
        RotateChannelCredentialsAction,
        RotateIngestEndpointCredentialsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateChannelAction,
        UpdateOriginEndpointAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaPackageRequest(const Action action);
    MediaPackageRequest(const MediaPackageRequest &other);
    MediaPackageRequest &operator=(const MediaPackageRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaPackageRequest &other) const;


protected:
    /// @cond internal
    explicit MediaPackageRequest(MediaPackageRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaPackageRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
