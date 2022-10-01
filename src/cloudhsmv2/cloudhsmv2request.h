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

#ifndef QTAWS_CLOUDHSMV2REQUEST_H
#define QTAWS_CLOUDHSMV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudhsmv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudHsmV2 {

class CloudHsmV2RequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT CloudHsmV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudHsmV2.
    enum Action {
        CopyBackupToRegionAction,
        CreateClusterAction,
        CreateHsmAction,
        DeleteBackupAction,
        DeleteClusterAction,
        DeleteHsmAction,
        DescribeBackupsAction,
        DescribeClustersAction,
        InitializeClusterAction,
        ListTagsAction,
        ModifyBackupAttributesAction,
        ModifyClusterAction,
        RestoreBackupAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudHsmV2Request(const Action action);
    CloudHsmV2Request(const CloudHsmV2Request &other);
    CloudHsmV2Request &operator=(const CloudHsmV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudHsmV2Request &other) const;


protected:
    /// @cond internal
    explicit CloudHsmV2Request(CloudHsmV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudHsmV2Request)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
