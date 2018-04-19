/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDHSMREQUEST_H
#define QTAWS_CLOUDHSMREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudHSM {

class CloudHSMRequestPrivate;

class QTAWS_EXPORT CloudHSMRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudHSM.
    enum Action {
        AddTagsToResourceAction,
        CreateHapgAction,
        CreateHsmAction,
        CreateLunaClientAction,
        DeleteHapgAction,
        DeleteHsmAction,
        DeleteLunaClientAction,
        DescribeHapgAction,
        DescribeHsmAction,
        DescribeLunaClientAction,
        GetConfigAction,
        ListAvailableZonesAction,
        ListHapgsAction,
        ListHsmsAction,
        ListLunaClientsAction,
        ListTagsForResourceAction,
        ModifyHapgAction,
        ModifyHsmAction,
        ModifyLunaClientAction,
        RemoveTagsFromResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudHSMRequest(const Action action);
    CloudHSMRequest(const CloudHSMRequest &other);
    CloudHSMRequest &operator=(const CloudHSMRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudHSMRequest &other) const override;


protected:
    /// @cond internal
    CloudHSMRequest(CloudHSMRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(CloudHSMRequest)

};

} // namespace CloudHSM
} // namespace QtAws

#endif
