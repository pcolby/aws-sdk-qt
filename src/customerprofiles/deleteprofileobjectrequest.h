// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTREQUEST_H
#define QTAWS_DELETEPROFILEOBJECTREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteProfileObjectRequest : public CustomerProfilesRequest {

public:
    DeleteProfileObjectRequest(const DeleteProfileObjectRequest &other);
    DeleteProfileObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileObjectRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
