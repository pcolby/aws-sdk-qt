// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYRESOLUTIONJOBREQUEST_H
#define QTAWS_GETIDENTITYRESOLUTIONJOBREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIdentityResolutionJobRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetIdentityResolutionJobRequest : public CustomerProfilesRequest {

public:
    GetIdentityResolutionJobRequest(const GetIdentityResolutionJobRequest &other);
    GetIdentityResolutionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityResolutionJobRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
