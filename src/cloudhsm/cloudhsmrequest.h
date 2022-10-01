// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMREQUEST_H
#define QTAWS_CLOUDHSMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudhsmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudHsm {

class CloudHsmRequestPrivate;

class QTAWSCLOUDHSM_EXPORT CloudHsmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudHsm.
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

    CloudHsmRequest(const Action action);
    CloudHsmRequest(const CloudHsmRequest &other);
    CloudHsmRequest &operator=(const CloudHsmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudHsmRequest &other) const;


protected:
    /// @cond internal
    explicit CloudHsmRequest(CloudHsmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
