// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MQREQUEST_H
#define QTAWS_MQREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmqglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Mq {

class MqRequestPrivate;

class QTAWSMQ_EXPORT MqRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Mq.
    enum Action {
        CreateBrokerAction,
        CreateConfigurationAction,
        CreateTagsAction,
        CreateUserAction,
        DeleteBrokerAction,
        DeleteTagsAction,
        DeleteUserAction,
        DescribeBrokerAction,
        DescribeBrokerEngineTypesAction,
        DescribeBrokerInstanceOptionsAction,
        DescribeConfigurationAction,
        DescribeConfigurationRevisionAction,
        DescribeUserAction,
        ListBrokersAction,
        ListConfigurationRevisionsAction,
        ListConfigurationsAction,
        ListTagsAction,
        ListUsersAction,
        RebootBrokerAction,
        UpdateBrokerAction,
        UpdateConfigurationAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MqRequest(const Action action);
    MqRequest(const MqRequest &other);
    MqRequest &operator=(const MqRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MqRequest &other) const;


protected:
    /// @cond internal
    explicit MqRequest(MqRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MqRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
