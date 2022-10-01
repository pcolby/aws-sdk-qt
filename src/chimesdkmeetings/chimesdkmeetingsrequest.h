// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEETINGSREQUEST_H
#define QTAWS_CHIMESDKMEETINGSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawschimesdkmeetingsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ChimeSdkMeetings {

class ChimeSdkMeetingsRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT ChimeSdkMeetingsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ChimeSdkMeetings.
    enum Action {
        BatchCreateAttendeeAction,
        BatchUpdateAttendeeCapabilitiesExceptAction,
        CreateAttendeeAction,
        CreateMeetingAction,
        CreateMeetingWithAttendeesAction,
        DeleteAttendeeAction,
        DeleteMeetingAction,
        GetAttendeeAction,
        GetMeetingAction,
        ListAttendeesAction,
        ListTagsForResourceAction,
        StartMeetingTranscriptionAction,
        StopMeetingTranscriptionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAttendeeCapabilitiesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ChimeSdkMeetingsRequest(const Action action);
    ChimeSdkMeetingsRequest(const ChimeSdkMeetingsRequest &other);
    ChimeSdkMeetingsRequest &operator=(const ChimeSdkMeetingsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ChimeSdkMeetingsRequest &other) const;


protected:
    /// @cond internal
    explicit ChimeSdkMeetingsRequest(ChimeSdkMeetingsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkMeetingsRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
