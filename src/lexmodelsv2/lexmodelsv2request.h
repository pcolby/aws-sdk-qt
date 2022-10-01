// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        DeleteCustomVocabularyAction,
        DeleteExportAction,
        DeleteImportAction,
        DeleteIntentAction,
        DeleteResourcePolicyAction,
        DeleteResourcePolicyStatementAction,
        DeleteSlotAction,
        DeleteSlotTypeAction,
        DeleteUtterancesAction,
        DescribeBotAction,
        DescribeBotAliasAction,
        DescribeBotLocaleAction,
        DescribeBotRecommendationAction,
        DescribeBotVersionAction,
        DescribeCustomVocabularyMetadataAction,
        DescribeExportAction,
        DescribeImportAction,
        DescribeIntentAction,
        DescribeResourcePolicyAction,
        DescribeSlotAction,
        DescribeSlotTypeAction,
        ListAggregatedUtterancesAction,
        ListBotAliasesAction,
        ListBotLocalesAction,
        ListBotRecommendationsAction,
        ListBotVersionsAction,
        ListBotsAction,
        ListBuiltInIntentsAction,
        ListBuiltInSlotTypesAction,
        ListExportsAction,
        ListImportsAction,
        ListIntentsAction,
        ListRecommendedIntentsAction,
        ListSlotTypesAction,
        ListSlotsAction,
        ListTagsForResourceAction,
        SearchAssociatedTranscriptsAction,
        StartBotRecommendationAction,
        StartImportAction,
        StopBotRecommendationAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBotAction,
        UpdateBotAliasAction,
        UpdateBotLocaleAction,
        UpdateBotRecommendationAction,
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
    explicit LexModelsV2Request(LexModelsV2RequestPrivate * const d);
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
