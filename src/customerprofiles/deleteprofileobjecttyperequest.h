// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTTYPEREQUEST_H
#define QTAWS_DELETEPROFILEOBJECTTYPEREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectTypeRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteProfileObjectTypeRequest : public CustomerProfilesRequest {

public:
    DeleteProfileObjectTypeRequest(const DeleteProfileObjectTypeRequest &other);
    DeleteProfileObjectTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
