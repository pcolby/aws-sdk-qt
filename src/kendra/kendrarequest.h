// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KENDRAREQUEST_H
#define QTAWS_KENDRAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskendraglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Kendra {

class KendraRequestPrivate;

class QTAWSKENDRA_EXPORT KendraRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Kendra.
    enum Action {
        AssociateEntitiesToExperienceAction,
        AssociatePersonasToEntitiesAction,
        BatchDeleteDocumentAction,
        BatchGetDocumentStatusAction,
        BatchPutDocumentAction,
        ClearQuerySuggestionsAction,
        CreateAccessControlConfigurationAction,
        CreateDataSourceAction,
        CreateExperienceAction,
        CreateFaqAction,
        CreateIndexAction,
        CreateQuerySuggestionsBlockListAction,
        CreateThesaurusAction,
        DeleteAccessControlConfigurationAction,
        DeleteDataSourceAction,
        DeleteExperienceAction,
        DeleteFaqAction,
        DeleteIndexAction,
        DeletePrincipalMappingAction,
        DeleteQuerySuggestionsBlockListAction,
        DeleteThesaurusAction,
        DescribeAccessControlConfigurationAction,
        DescribeDataSourceAction,
        DescribeExperienceAction,
        DescribeFaqAction,
        DescribeIndexAction,
        DescribePrincipalMappingAction,
        DescribeQuerySuggestionsBlockListAction,
        DescribeQuerySuggestionsConfigAction,
        DescribeThesaurusAction,
        DisassociateEntitiesFromExperienceAction,
        DisassociatePersonasFromEntitiesAction,
        GetQuerySuggestionsAction,
        GetSnapshotsAction,
        ListAccessControlConfigurationsAction,
        ListDataSourceSyncJobsAction,
        ListDataSourcesAction,
        ListEntityPersonasAction,
        ListExperienceEntitiesAction,
        ListExperiencesAction,
        ListFaqsAction,
        ListGroupsOlderThanOrderingIdAction,
        ListIndicesAction,
        ListQuerySuggestionsBlockListsAction,
        ListTagsForResourceAction,
        ListThesauriAction,
        PutPrincipalMappingAction,
        QueryAction,
        StartDataSourceSyncJobAction,
        StopDataSourceSyncJobAction,
        SubmitFeedbackAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAccessControlConfigurationAction,
        UpdateDataSourceAction,
        UpdateExperienceAction,
        UpdateIndexAction,
        UpdateQuerySuggestionsBlockListAction,
        UpdateQuerySuggestionsConfigAction,
        UpdateThesaurusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KendraRequest(const Action action);
    KendraRequest(const KendraRequest &other);
    KendraRequest &operator=(const KendraRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KendraRequest &other) const;


protected:
    /// @cond internal
    explicit KendraRequest(KendraRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KendraRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
