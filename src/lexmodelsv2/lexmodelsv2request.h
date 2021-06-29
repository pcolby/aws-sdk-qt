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

#ifndef QTAWS_LEXMODELSV2REQUEST_H
#define QTAWS_LEXMODELSV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslexmodelsv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LexModelsV2 {

class LexModelsV2RequestPrivate;

class QTAWSLEXMODELSV2_EXPORT LexModelsV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LexModelsV2.
    enum Action {
        BuildBotLocaleAction,
        CreateBotAction,
        CreateBotAliasAction,
        CreateBotLocaleAction,
        CreateBotVersionAction,
        CreateExportAction,
        CreateIntentAction,
        CreateResourcePolicyAction,
        CreateResourcePolicyStatementAction,
        CreateSlotAction,
        CreateSlotTypeAction,
        CreateUploadUrlAction,
        DeleteBotAction,
        DeleteBotAliasAction,
        DeleteBotLocaleAction,
        DeleteBotVersionAction,
        DeleteExportAction,
        DeleteImportAction,
        DeleteIntentAction,
        DeleteResourcePolicyAction,
        DeleteResourcePolicyStatementAction,
        DeleteSlotAction,
        DeleteSlotTypeAction,
        DescribeBotAction,
        DescribeBotAliasAction,
        DescribeBotLocaleAction,
        DescribeBotVersionAction,
        DescribeExportAction,
        DescribeImportAction,
        DescribeIntentAction,
        DescribeResourcePolicyAction,
        DescribeSlotAction,
        DescribeSlotTypeAction,
        ListBotAliasesAction,
        ListBotLocalesAction,
        ListBotVersionsAction,
        ListBotsAction,
        ListBuiltInIntentsAction,
        ListBuiltInSlotTypesAction,
        ListExportsAction,
        ListImportsAction,
        ListIntentsAction,
        ListSlotTypesAction,
        ListSlotsAction,
        ListTagsForResourceAction,
        StartImportAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBotAction,
        UpdateBotAliasAction,
        UpdateBotLocaleAction,
        UpdateExportAction,
        UpdateIntentAction,
        UpdateResourcePolicyAction,
        UpdateSlotAction,
        UpdateSlotTypeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LexModelsV2Request(const Action action);
    LexModelsV2Request(const LexModelsV2Request &other);
    LexModelsV2Request &operator=(const LexModelsV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LexModelsV2Request &other) const;


protected:
    /// @cond internal
    LexModelsV2RequestPrivate * const d_ptr; ///< Internal d-pointer.
    LexModelsV2Request(LexModelsV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LexModelsV2Request)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
