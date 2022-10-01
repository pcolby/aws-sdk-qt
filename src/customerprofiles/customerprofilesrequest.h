// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CUSTOMERPROFILESREQUEST_H
#define QTAWS_CUSTOMERPROFILESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscustomerprofilesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CustomerProfilesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CustomerProfiles.
    enum Action {
        AddProfileKeyAction,
        CreateDomainAction,
        CreateIntegrationWorkflowAction,
        CreateProfileAction,
        DeleteDomainAction,
        DeleteIntegrationAction,
        DeleteProfileAction,
        DeleteProfileKeyAction,
        DeleteProfileObjectAction,
        DeleteProfileObjectTypeAction,
        DeleteWorkflowAction,
        GetAutoMergingPreviewAction,
        GetDomainAction,
        GetIdentityResolutionJobAction,
        GetIntegrationAction,
        GetMatchesAction,
        GetProfileObjectTypeAction,
        GetProfileObjectTypeTemplateAction,
        GetWorkflowAction,
        GetWorkflowStepsAction,
        ListAccountIntegrationsAction,
        ListDomainsAction,
        ListIdentityResolutionJobsAction,
        ListIntegrationsAction,
        ListProfileObjectTypeTemplatesAction,
        ListProfileObjectTypesAction,
        ListProfileObjectsAction,
        ListTagsForResourceAction,
        ListWorkflowsAction,
        MergeProfilesAction,
        PutIntegrationAction,
        PutProfileObjectAction,
        PutProfileObjectTypeAction,
        SearchProfilesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDomainAction,
        UpdateProfileAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CustomerProfilesRequest(const Action action);
    CustomerProfilesRequest(const CustomerProfilesRequest &other);
    CustomerProfilesRequest &operator=(const CustomerProfilesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CustomerProfilesRequest &other) const;


protected:
    /// @cond internal
    explicit CustomerProfilesRequest(CustomerProfilesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CustomerProfilesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
