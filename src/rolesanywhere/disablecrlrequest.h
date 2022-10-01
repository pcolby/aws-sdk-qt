// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECRLREQUEST_H
#define QTAWS_DISABLECRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DisableCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT DisableCrlRequest : public RolesAnywhereRequest {

public:
    DisableCrlRequest(const DisableCrlRequest &other);
    DisableCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
