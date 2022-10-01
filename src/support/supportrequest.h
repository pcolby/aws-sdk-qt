// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTREQUEST_H
#define QTAWS_SUPPORTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssupportglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Support {

class SupportRequestPrivate;

class QTAWSSUPPORT_EXPORT SupportRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Support.
    enum Action {
        AddAttachmentsToSetAction,
        AddCommunicationToCaseAction,
        CreateCaseAction,
        DescribeAttachmentAction,
        DescribeCasesAction,
        DescribeCommunicationsAction,
        DescribeServicesAction,
        DescribeSeverityLevelsAction,
        DescribeTrustedAdvisorCheckRefreshStatusesAction,
        DescribeTrustedAdvisorCheckResultAction,
        DescribeTrustedAdvisorCheckSummariesAction,
        DescribeTrustedAdvisorChecksAction,
        RefreshTrustedAdvisorCheckAction,
        ResolveCaseAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SupportRequest(const Action action);
    SupportRequest(const SupportRequest &other);
    SupportRequest &operator=(const SupportRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SupportRequest &other) const;


protected:
    /// @cond internal
    explicit SupportRequest(SupportRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SupportRequest)

};

} // namespace Support
} // namespace QtAws

#endif
