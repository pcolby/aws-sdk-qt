// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROFILEREQUEST_H
#define QTAWS_DISABLEPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DisableProfileRequest : public RolesAnywhereRequest {

public:
    DisableProfileRequest(const DisableProfileRequest &other);
    DisableProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
