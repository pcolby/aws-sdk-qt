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

#ifndef QTAWS_MGNREQUEST_H
#define QTAWS_MGNREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace mgn {

class mgnRequestPrivate;

class QTAWS_EXPORT mgnRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by mgn.
    enum Action {
        ChangeServerLifeCycleStateAction,
        CreateReplicationConfigurationTemplateAction,
        DeleteJobAction,
        DeleteReplicationConfigurationTemplateAction,
        DeleteSourceServerAction,
        DescribeJobLogItemsAction,
        DescribeJobsAction,
        DescribeReplicationConfigurationTemplatesAction,
        DescribeSourceServersAction,
        DisconnectFromServiceAction,
        FinalizeCutoverAction,
        GetLaunchConfigurationAction,
        GetReplicationConfigurationAction,
        InitializeServiceAction,
        ListTagsForResourceAction,
        MarkAsArchivedAction,
        RetryDataReplicationAction,
        StartCutoverAction,
        StartTestAction,
        TagResourceAction,
        TerminateTargetInstancesAction,
        UntagResourceAction,
        UpdateLaunchConfigurationAction,
        UpdateReplicationConfigurationAction,
        UpdateReplicationConfigurationTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    mgnRequest(const Action action);
    mgnRequest(const mgnRequest &other);
    mgnRequest &operator=(const mgnRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const mgnRequest &other) const;


protected:
    /// @cond internal
    mgnRequest(mgnRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(mgnRequest)

};

} // namespace mgn
} // namespace QtAws

#endif
