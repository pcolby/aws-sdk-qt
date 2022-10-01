// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGREQUEST_H
#define QTAWS_LEXMODELBUILDINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslexmodelbuildingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT LexModelBuildingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LexModelBuilding.
    enum Action {
        CreateBotVersionAction,
        CreateIntentVersionAction,
        CreateSlotTypeVersionAction,
        DeleteBotAction,
        DeleteBotAliasAction,
        DeleteBotChannelAssociationAction,
        DeleteBotVersionAction,
        DeleteIntentAction,
        DeleteIntentVersionAction,
        DeleteSlotTypeAction,
        DeleteSlotTypeVersionAction,
        DeleteUtterancesAction,
        GetBotAction,
        GetBotAliasAction,
        GetBotAliasesAction,
        GetBotChannelAssociationAction,
        GetBotChannelAssociationsAction,
        GetBotVersionsAction,
        GetBotsAction,
        GetBuiltinIntentAction,
        GetBuiltinIntentsAction,
        GetBuiltinSlotTypesAction,
        GetExportAction,
        GetImportAction,
        GetIntentAction,
        GetIntentVersionsAction,
        GetIntentsAction,
        GetMigrationAction,
        GetMigrationsAction,
        GetSlotTypeAction,
        GetSlotTypeVersionsAction,
        GetSlotTypesAction,
        GetUtterancesViewAction,
        ListTagsForResourceAction,
        PutBotAction,
        PutBotAliasAction,
        PutIntentAction,
        PutSlotTypeAction,
        StartImportAction,
        StartMigrationAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LexModelBuildingRequest(const Action action);
    LexModelBuildingRequest(const LexModelBuildingRequest &other);
    LexModelBuildingRequest &operator=(const LexModelBuildingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LexModelBuildingRequest &other) const;


protected:
    /// @cond internal
    explicit LexModelBuildingRequest(LexModelBuildingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexModelBuildingRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
