// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MTURKREQUEST_H
#define QTAWS_MTURKREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmturkglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MTurk {

class MTurkRequestPrivate;

class QTAWSMTURK_EXPORT MTurkRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MTurk.
    enum Action {
        AcceptQualificationRequestAction,
        ApproveAssignmentAction,
        AssociateQualificationWithWorkerAction,
        CreateAdditionalAssignmentsForHITAction,
        CreateHITAction,
        CreateHITTypeAction,
        CreateHITWithHITTypeAction,
        CreateQualificationTypeAction,
        CreateWorkerBlockAction,
        DeleteHITAction,
        DeleteQualificationTypeAction,
        DeleteWorkerBlockAction,
        DisassociateQualificationFromWorkerAction,
        GetAccountBalanceAction,
        GetAssignmentAction,
        GetFileUploadURLAction,
        GetHITAction,
        GetQualificationScoreAction,
        GetQualificationTypeAction,
        ListAssignmentsForHITAction,
        ListBonusPaymentsAction,
        ListHITsAction,
        ListHITsForQualificationTypeAction,
        ListQualificationRequestsAction,
        ListQualificationTypesAction,
        ListReviewPolicyResultsForHITAction,
        ListReviewableHITsAction,
        ListWorkerBlocksAction,
        ListWorkersWithQualificationTypeAction,
        NotifyWorkersAction,
        RejectAssignmentAction,
        RejectQualificationRequestAction,
        SendBonusAction,
        SendTestEventNotificationAction,
        UpdateExpirationForHITAction,
        UpdateHITReviewStatusAction,
        UpdateHITTypeOfHITAction,
        UpdateNotificationSettingsAction,
        UpdateQualificationTypeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MTurkRequest(const Action action);
    MTurkRequest(const MTurkRequest &other);
    MTurkRequest &operator=(const MTurkRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MTurkRequest &other) const;


protected:
    /// @cond internal
    explicit MTurkRequest(MTurkRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MTurkRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
