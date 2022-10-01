// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEREQUEST_H
#define QTAWS_DELETEPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DeleteProfileRequest : public RolesAnywhereRequest {

public:
    DeleteProfileRequest(const DeleteProfileRequest &other);
    DeleteProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
