// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIATAILORREQUEST_H
#define QTAWS_MEDIATAILORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmediatailorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaTailor {

class MediaTailorRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT MediaTailorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaTailor.
    enum Action {
        ConfigureLogsForPlaybackConfigurationAction,
        CreateChannelAction,
        CreateLiveSourceAction,
        CreatePrefetchScheduleAction,
        CreateProgramAction,
        CreateSourceLocationAction,
        CreateVodSourceAction,
        DeleteChannelAction,
        DeleteChannelPolicyAction,
        DeleteLiveSourceAction,
        DeletePlaybackConfigurationAction,
        DeletePrefetchScheduleAction,
        DeleteProgramAction,
        DeleteSourceLocationAction,
        DeleteVodSourceAction,
        DescribeChannelAction,
        DescribeLiveSourceAction,
        DescribeProgramAction,
        DescribeSourceLocationAction,
        DescribeVodSourceAction,
        GetChannelPolicyAction,
        GetChannelScheduleAction,
        GetPlaybackConfigurationAction,
        GetPrefetchScheduleAction,
        ListAlertsAction,
        ListChannelsAction,
        ListLiveSourcesAction,
        ListPlaybackConfigurationsAction,
        ListPrefetchSchedulesAction,
        ListSourceLocationsAction,
        ListTagsForResourceAction,
        ListVodSourcesAction,
        PutChannelPolicyAction,
        PutPlaybackConfigurationAction,
        StartChannelAction,
        StopChannelAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateChannelAction,
        UpdateLiveSourceAction,
        UpdateSourceLocationAction,
        UpdateVodSourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaTailorRequest(const Action action);
    MediaTailorRequest(const MediaTailorRequest &other);
    MediaTailorRequest &operator=(const MediaTailorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaTailorRequest &other) const;


protected:
    /// @cond internal
    explicit MediaTailorRequest(MediaTailorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaTailorRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
