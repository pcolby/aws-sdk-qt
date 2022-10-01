// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONREQUEST_H
#define QTAWS_CREATEPERMISSIONREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class CreatePermissionRequestPrivate;

class QTAWSACMPCA_EXPORT CreatePermissionRequest : public AcmPcaRequest {

public:
    CreatePermissionRequest(const CreatePermissionRequest &other);
    CreatePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
