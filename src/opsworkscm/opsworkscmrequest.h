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

#ifndef QTAWS_OPSWORKSCMREQUEST_H
#define QTAWS_OPSWORKSCMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsopsworkscmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace OpsWorksCM {

class OpsWorksCMRequestPrivate;

class QTAWSOPSWORKSCM_EXPORT OpsWorksCMRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by OpsWorksCM.
    enum Action {
        AssociateNodeAction,
        CreateBackupAction,
        CreateServerAction,
        DeleteBackupAction,
        DeleteServerAction,
        DescribeAccountAttributesAction,
        DescribeBackupsAction,
        DescribeEventsAction,
        DescribeNodeAssociationStatusAction,
        DescribeServersAction,
        DisassociateNodeAction,
        ExportServerEngineAttributeAction,
        ListTagsForResourceAction,
        RestoreServerAction,
        StartMaintenanceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateServerAction,
        UpdateServerEngineAttributesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    OpsWorksCMRequest(const Action action);
    OpsWorksCMRequest(const OpsWorksCMRequest &other);
    OpsWorksCMRequest &operator=(const OpsWorksCMRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const OpsWorksCMRequest &other) const;


protected:
    /// @cond internal
    OpsWorksCMRequestPrivate * const d_ptr; ///< Internal d-pointer.
    OpsWorksCMRequest(OpsWorksCMRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpsWorksCMRequest)

};

} // namespace OpsWorksCM
} // namespace QtAws

#endif
