// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYRESOLUTIONJOBSREQUEST_H
#define QTAWS_LISTIDENTITYRESOLUTIONJOBSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListIdentityResolutionJobsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListIdentityResolutionJobsRequest : public CustomerProfilesRequest {

public:
    ListIdentityResolutionJobsRequest(const ListIdentityResolutionJobsRequest &other);
    ListIdentityResolutionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityResolutionJobsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
