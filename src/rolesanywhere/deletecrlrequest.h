// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRLREQUEST_H
#define QTAWS_DELETECRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DeleteCrlRequest : public RolesAnywhereRequest {

public:
    DeleteCrlRequest(const DeleteCrlRequest &other);
    DeleteCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
