// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREQUEST_H
#define QTAWS_BATCHREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsbatchglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Batch {

class BatchRequestPrivate;

class QTAWSBATCH_EXPORT BatchRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Batch.
    enum Action {
        CancelJobAction,
        CreateComputeEnvironmentAction,
        CreateJobQueueAction,
        CreateSchedulingPolicyAction,
        DeleteComputeEnvironmentAction,
        DeleteJobQueueAction,
        DeleteSchedulingPolicyAction,
        DeregisterJobDefinitionAction,
        DescribeComputeEnvironmentsAction,
        DescribeJobDefinitionsAction,
        DescribeJobQueuesAction,
        DescribeJobsAction,
        DescribeSchedulingPoliciesAction,
        ListJobsAction,
        ListSchedulingPoliciesAction,
        ListTagsForResourceAction,
        RegisterJobDefinitionAction,
        SubmitJobAction,
        TagResourceAction,
        TerminateJobAction,
        UntagResourceAction,
        UpdateComputeEnvironmentAction,
        UpdateJobQueueAction,
        UpdateSchedulingPolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    BatchRequest(const Action action);
    BatchRequest(const BatchRequest &other);
    BatchRequest &operator=(const BatchRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const BatchRequest &other) const;


protected:
    /// @cond internal
    explicit BatchRequest(BatchRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
