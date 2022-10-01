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
