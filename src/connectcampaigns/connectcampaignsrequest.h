// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCAMPAIGNSREQUEST_H
#define QTAWS_CONNECTCAMPAIGNSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsconnectcampaignsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConnectCampaigns {

class ConnectCampaignsRequestPrivate;

class QTAWSCONNECTCAMPAIGNS_EXPORT ConnectCampaignsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ConnectCampaigns.
    enum Action {
        CreateCampaignAction,
        DeleteCampaignAction,
        DeleteConnectInstanceConfigAction,
        DeleteInstanceOnboardingJobAction,
        DescribeCampaignAction,
        GetCampaignStateAction,
        GetCampaignStateBatchAction,
        GetConnectInstanceConfigAction,
        GetInstanceOnboardingJobStatusAction,
        ListCampaignsAction,
        ListTagsForResourceAction,
        PauseCampaignAction,
        PutDialRequestBatchAction,
        ResumeCampaignAction,
        StartCampaignAction,
        StartInstanceOnboardingJobAction,
        StopCampaignAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCampaignDialerConfigAction,
        UpdateCampaignNameAction,
        UpdateCampaignOutboundCallConfigAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ConnectCampaignsRequest(const Action action);
    ConnectCampaignsRequest(const ConnectCampaignsRequest &other);
    ConnectCampaignsRequest &operator=(const ConnectCampaignsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ConnectCampaignsRequest &other) const;


protected:
    /// @cond internal
    explicit ConnectCampaignsRequest(ConnectCampaignsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectCampaignsRequest)

};

} // namespace ConnectCampaigns
} // namespace QtAws

#endif
