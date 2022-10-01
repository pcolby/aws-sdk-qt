// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPETEMPLATEREQUEST_P_H
#define QTAWS_GETPROFILEOBJECTTYPETEMPLATEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getprofileobjecttypetemplaterequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeTemplateRequest;

class GetProfileObjectTypeTemplateRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetProfileObjectTypeTemplateRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetProfileObjectTypeTemplateRequest * const q);
    GetProfileObjectTypeTemplateRequestPrivate(const GetProfileObjectTypeTemplateRequestPrivate &other,
                                   GetProfileObjectTypeTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProfileObjectTypeTemplateRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
