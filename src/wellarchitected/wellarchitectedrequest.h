// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WELLARCHITECTEDREQUEST_H
#define QTAWS_WELLARCHITECTEDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswellarchitectedglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WellArchitected {

class WellArchitectedRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT WellArchitectedRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WellArchitected.
    enum Action {
        AssociateLensesAction,
        CreateLensShareAction,
        CreateLensVersionAction,
        CreateMilestoneAction,
        CreateWorkloadAction,
        CreateWorkloadShareAction,
        DeleteLensAction,
        DeleteLensShareAction,
        DeleteWorkloadAction,
        DeleteWorkloadShareAction,
        DisassociateLensesAction,
        ExportLensAction,
        GetAnswerAction,
        GetLensAction,
        GetLensReviewAction,
        GetLensReviewReportAction,
        GetLensVersionDifferenceAction,
        GetMilestoneAction,
        GetWorkloadAction,
        ImportLensAction,
        ListAnswersAction,
        ListLensReviewImprovementsAction,
        ListLensReviewsAction,
        ListLensSharesAction,
        ListLensesAction,
        ListMilestonesAction,
        ListNotificationsAction,
        ListShareInvitationsAction,
        ListTagsForResourceAction,
        ListWorkloadSharesAction,
        ListWorkloadsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAnswerAction,
        UpdateGlobalSettingsAction,
        UpdateLensReviewAction,
        UpdateShareInvitationAction,
        UpdateWorkloadAction,
        UpdateWorkloadShareAction,
        UpgradeLensReviewAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WellArchitectedRequest(const Action action);
    WellArchitectedRequest(const WellArchitectedRequest &other);
    WellArchitectedRequest &operator=(const WellArchitectedRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WellArchitectedRequest &other) const;


protected:
    /// @cond internal
    explicit WellArchitectedRequest(WellArchitectedRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WellArchitectedRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
