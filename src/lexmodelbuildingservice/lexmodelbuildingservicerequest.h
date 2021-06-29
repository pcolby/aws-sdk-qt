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

#ifndef QTAWS_LEXMODELBUILDINGSERVICEREQUEST_H
#define QTAWS_LEXMODELBUILDINGSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslexmodelbuildingserviceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LexModelBuildingService {

class LexModelBuildingServiceRequestPrivate;

class QTAWSLEXMODELBUILDINGSERVICE_EXPORT LexModelBuildingServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LexModelBuildingService.
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
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LexModelBuildingServiceRequest(const Action action);
    LexModelBuildingServiceRequest(const LexModelBuildingServiceRequest &other);
    LexModelBuildingServiceRequest &operator=(const LexModelBuildingServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LexModelBuildingServiceRequest &other) const;


protected:
    /// @cond internal
    LexModelBuildingServiceRequestPrivate * const d_ptr; ///< Internal d-pointer.
    LexModelBuildingServiceRequest(LexModelBuildingServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexModelBuildingServiceRequest)

};

} // namespace LexModelBuildingService
} // namespace QtAws

#endif
