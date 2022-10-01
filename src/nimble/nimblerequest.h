// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLEREQUEST_H
#define QTAWS_NIMBLEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsnimbleglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Nimble {

class NimbleRequestPrivate;

class QTAWSNIMBLE_EXPORT NimbleRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Nimble.
    enum Action {
        AcceptEulasAction,
        CreateLaunchProfileAction,
        CreateStreamingImageAction,
        CreateStreamingSessionAction,
        CreateStreamingSessionStreamAction,
        CreateStudioAction,
        CreateStudioComponentAction,
        DeleteLaunchProfileAction,
        DeleteLaunchProfileMemberAction,
        DeleteStreamingImageAction,
        DeleteStreamingSessionAction,
        DeleteStudioAction,
        DeleteStudioComponentAction,
        DeleteStudioMemberAction,
        GetEulaAction,
        GetLaunchProfileAction,
        GetLaunchProfileDetailsAction,
        GetLaunchProfileInitializationAction,
        GetLaunchProfileMemberAction,
        GetStreamingImageAction,
        GetStreamingSessionAction,
        GetStreamingSessionStreamAction,
        GetStudioAction,
        GetStudioComponentAction,
        GetStudioMemberAction,
        ListEulaAcceptancesAction,
        ListEulasAction,
        ListLaunchProfileMembersAction,
        ListLaunchProfilesAction,
        ListStreamingImagesAction,
        ListStreamingSessionsAction,
        ListStudioComponentsAction,
        ListStudioMembersAction,
        ListStudiosAction,
        ListTagsForResourceAction,
        PutLaunchProfileMembersAction,
        PutStudioMembersAction,
        StartStreamingSessionAction,
        StartStudioSSOConfigurationRepairAction,
        StopStreamingSessionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateLaunchProfileAction,
        UpdateLaunchProfileMemberAction,
        UpdateStreamingImageAction,
        UpdateStudioAction,
        UpdateStudioComponentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    NimbleRequest(const Action action);
    NimbleRequest(const NimbleRequest &other);
    NimbleRequest &operator=(const NimbleRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const NimbleRequest &other) const;


protected:
    /// @cond internal
    explicit NimbleRequest(NimbleRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NimbleRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
