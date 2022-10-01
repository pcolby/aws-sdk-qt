// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTHINGSGRAPHREQUEST_H
#define QTAWS_IOTTHINGSGRAPHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotthingsgraphglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphRequestPrivate;

class QTAWSIOTTHINGSGRAPH_EXPORT IoTThingsGraphRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoTThingsGraph.
    enum Action {
        AssociateEntityToThingAction,
        CreateFlowTemplateAction,
        CreateSystemInstanceAction,
        CreateSystemTemplateAction,
        DeleteFlowTemplateAction,
        DeleteNamespaceAction,
        DeleteSystemInstanceAction,
        DeleteSystemTemplateAction,
        DeploySystemInstanceAction,
        DeprecateFlowTemplateAction,
        DeprecateSystemTemplateAction,
        DescribeNamespaceAction,
        DissociateEntityFromThingAction,
        GetEntitiesAction,
        GetFlowTemplateAction,
        GetFlowTemplateRevisionsAction,
        GetNamespaceDeletionStatusAction,
        GetSystemInstanceAction,
        GetSystemTemplateAction,
        GetSystemTemplateRevisionsAction,
        GetUploadStatusAction,
        ListFlowExecutionMessagesAction,
        ListTagsForResourceAction,
        SearchEntitiesAction,
        SearchFlowExecutionsAction,
        SearchFlowTemplatesAction,
        SearchSystemInstancesAction,
        SearchSystemTemplatesAction,
        SearchThingsAction,
        TagResourceAction,
        UndeploySystemInstanceAction,
        UntagResourceAction,
        UpdateFlowTemplateAction,
        UpdateSystemTemplateAction,
        UploadEntityDefinitionsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTThingsGraphRequest(const Action action);
    IoTThingsGraphRequest(const IoTThingsGraphRequest &other);
    IoTThingsGraphRequest &operator=(const IoTThingsGraphRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTThingsGraphRequest &other) const;


protected:
    /// @cond internal
    explicit IoTThingsGraphRequest(IoTThingsGraphRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTThingsGraphRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
