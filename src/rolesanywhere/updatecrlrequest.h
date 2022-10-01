// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECRLREQUEST_H
#define QTAWS_UPDATECRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateCrlRequest : public RolesAnywhereRequest {

public:
    UpdateCrlRequest(const UpdateCrlRequest &other);
    UpdateCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
