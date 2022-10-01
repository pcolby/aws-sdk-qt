// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOREQUEST_H
#define QTAWS_KINESISVIDEOREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskinesisvideoglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT KinesisVideoRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KinesisVideo.
    enum Action {
        CreateSignalingChannelAction,
        CreateStreamAction,
        DeleteSignalingChannelAction,
        DeleteStreamAction,
        DescribeImageGenerationConfigurationAction,
        DescribeNotificationConfigurationAction,
        DescribeSignalingChannelAction,
        DescribeStreamAction,
        GetDataEndpointAction,
        GetSignalingChannelEndpointAction,
        ListSignalingChannelsAction,
        ListStreamsAction,
        ListTagsForResourceAction,
        ListTagsForStreamAction,
        TagResourceAction,
        TagStreamAction,
        UntagResourceAction,
        UntagStreamAction,
        UpdateDataRetentionAction,
        UpdateImageGenerationConfigurationAction,
        UpdateNotificationConfigurationAction,
        UpdateSignalingChannelAction,
        UpdateStreamAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KinesisVideoRequest(const Action action);
    KinesisVideoRequest(const KinesisVideoRequest &other);
    KinesisVideoRequest &operator=(const KinesisVideoRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KinesisVideoRequest &other) const;


protected:
    /// @cond internal
    explicit KinesisVideoRequest(KinesisVideoRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KinesisVideoRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
