// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCESSANALYZERREQUEST_H
#define QTAWS_ACCESSANALYZERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsaccessanalyzerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AccessAnalyzer {

class AccessAnalyzerRequestPrivate;

class QTAWSACCESSANALYZER_EXPORT AccessAnalyzerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AccessAnalyzer.
    enum Action {
        ApplyArchiveRuleAction,
        CancelPolicyGenerationAction,
        CreateAccessPreviewAction,
        CreateAnalyzerAction,
        CreateArchiveRuleAction,
        DeleteAnalyzerAction,
        DeleteArchiveRuleAction,
        GetAccessPreviewAction,
        GetAnalyzedResourceAction,
        GetAnalyzerAction,
        GetArchiveRuleAction,
        GetFindingAction,
        GetGeneratedPolicyAction,
        ListAccessPreviewFindingsAction,
        ListAccessPreviewsAction,
        ListAnalyzedResourcesAction,
        ListAnalyzersAction,
        ListArchiveRulesAction,
        ListFindingsAction,
        ListPolicyGenerationsAction,
        ListTagsForResourceAction,
        StartPolicyGenerationAction,
        StartResourceScanAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateArchiveRuleAction,
        UpdateFindingsAction,
        ValidatePolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AccessAnalyzerRequest(const Action action);
    AccessAnalyzerRequest(const AccessAnalyzerRequest &other);
    AccessAnalyzerRequest &operator=(const AccessAnalyzerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AccessAnalyzerRequest &other) const;


protected:
    /// @cond internal
    explicit AccessAnalyzerRequest(AccessAnalyzerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AccessAnalyzerRequest)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
