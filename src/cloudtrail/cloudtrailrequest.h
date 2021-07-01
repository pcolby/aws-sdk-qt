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

#ifndef QTAWS_CLOUDTRAILREQUEST_H
#define QTAWS_CLOUDTRAILREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudtrailglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudTrail {

class CloudTrailRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT CloudTrailRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudTrail.
    enum Action {
        AddTagsAction,
        CreateTrailAction,
        DeleteTrailAction,
        DescribeTrailsAction,
        GetEventSelectorsAction,
        GetInsightSelectorsAction,
        GetTrailAction,
        GetTrailStatusAction,
        ListPublicKeysAction,
        ListTagsAction,
        ListTrailsAction,
        LookupEventsAction,
        PutEventSelectorsAction,
        PutInsightSelectorsAction,
        RemoveTagsAction,
        StartLoggingAction,
        StopLoggingAction,
        UpdateTrailAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudTrailRequest(const Action action);
    CloudTrailRequest(const CloudTrailRequest &other);
    CloudTrailRequest &operator=(const CloudTrailRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudTrailRequest &other) const;


protected:
    /// @cond internal
    explicit CloudTrailRequest(CloudTrailRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
