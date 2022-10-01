// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEPERMISSIONREQUEST_H
#define QTAWS_ADDPROFILEPERMISSIONREQUEST_H

#include "signerrequest.h"

namespace QtAws {
namespace Signer {

class AddProfilePermissionRequestPrivate;

class QTAWSSIGNER_EXPORT AddProfilePermissionRequest : public SignerRequest {

public:
    AddProfilePermissionRequest(const AddProfilePermissionRequest &other);
    AddProfilePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddProfilePermissionRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
