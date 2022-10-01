// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHREQUEST_H
#define QTAWS_CLOUDSEARCHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudsearchglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudSearch {

class CloudSearchRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT CloudSearchRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudSearch.
    enum Action {
        BuildSuggestersAction,
        CreateDomainAction,
        DefineAnalysisSchemeAction,
        DefineExpressionAction,
        DefineIndexFieldAction,
        DefineSuggesterAction,
        DeleteAnalysisSchemeAction,
        DeleteDomainAction,
        DeleteExpressionAction,
        DeleteIndexFieldAction,
        DeleteSuggesterAction,
        DescribeAnalysisSchemesAction,
        DescribeAvailabilityOptionsAction,
        DescribeDomainEndpointOptionsAction,
        DescribeDomainsAction,
        DescribeExpressionsAction,
        DescribeIndexFieldsAction,
        DescribeScalingParametersAction,
        DescribeServiceAccessPoliciesAction,
        DescribeSuggestersAction,
        IndexDocumentsAction,
        ListDomainNamesAction,
        UpdateAvailabilityOptionsAction,
        UpdateDomainEndpointOptionsAction,
        UpdateScalingParametersAction,
        UpdateServiceAccessPoliciesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudSearchRequest(const Action action);
    CloudSearchRequest(const CloudSearchRequest &other);
    CloudSearchRequest &operator=(const CloudSearchRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudSearchRequest &other) const;


protected:
    /// @cond internal
    explicit CloudSearchRequest(CloudSearchRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudSearchRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
