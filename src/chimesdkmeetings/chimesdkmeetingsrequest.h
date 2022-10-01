/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
