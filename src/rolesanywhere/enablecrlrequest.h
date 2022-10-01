// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECRLREQUEST_H
#define QTAWS_ENABLECRLREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableCrlRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT EnableCrlRequest : public RolesAnywhereRequest {

public:
    EnableCrlRequest(const EnableCrlRequest &other);
    EnableCrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
