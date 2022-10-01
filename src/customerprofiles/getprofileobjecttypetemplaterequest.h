// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPETEMPLATEREQUEST_H
#define QTAWS_GETPROFILEOBJECTTYPETEMPLATEREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeTemplateRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetProfileObjectTypeTemplateRequest : public CustomerProfilesRequest {

public:
    GetProfileObjectTypeTemplateRequest(const GetProfileObjectTypeTemplateRequest &other);
    GetProfileObjectTypeTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileObjectTypeTemplateRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
