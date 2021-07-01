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
    AccessAnalyzerRequest(AccessAnalyzerRequestPrivate * const d);
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
