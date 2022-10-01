// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEKEYREQUEST_H
#define QTAWS_DELETEPROFILEKEYREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileKeyRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT DeleteProfileKeyRequest : public CustomerProfilesRequest {

public:
    DeleteProfileKeyRequest(const DeleteProfileKeyRequest &other);
    DeleteProfileKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileKeyRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
