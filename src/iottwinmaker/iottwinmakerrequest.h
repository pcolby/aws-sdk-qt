// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERREQUEST_H
#define QTAWS_IOTTWINMAKERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiottwinmakerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerRequestPrivate;

class QTAWSIOTTWINMAKER_EXPORT IoTTwinMakerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTTwinMaker.
    enum Action {
        BatchPutPropertyValuesAction,
        CreateComponentTypeAction,
        CreateEntityAction,
        CreateSceneAction,
        CreateWorkspaceAction,
        DeleteComponentTypeAction,
        DeleteEntityAction,
        DeleteSceneAction,
        DeleteWorkspaceAction,
        GetComponentTypeAction,
        GetEntityAction,
        GetPropertyValueAction,
        GetPropertyValueHistoryAction,
        GetSceneAction,
        GetWorkspaceAction,
        ListComponentTypesAction,
        ListEntitiesAction,
        ListScenesAction,
        ListTagsForResourceAction,
        ListWorkspacesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateComponentTypeAction,
        UpdateEntityAction,
        UpdateSceneAction,
        UpdateWorkspaceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTTwinMakerRequest(const Action action);
    IoTTwinMakerRequest(const IoTTwinMakerRequest &other);
    IoTTwinMakerRequest &operator=(const IoTTwinMakerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTTwinMakerRequest &other) const;


protected:
    /// @cond internal
    explicit IoTTwinMakerRequest(IoTTwinMakerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTTwinMakerRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
