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
