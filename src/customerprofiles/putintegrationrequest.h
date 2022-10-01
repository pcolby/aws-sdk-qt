// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONREQUEST_H
#define QTAWS_PUTINTEGRATIONREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutIntegrationRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutIntegrationRequest : public CustomerProfilesRequest {

public:
    PutIntegrationRequest(const PutIntegrationRequest &other);
    PutIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
