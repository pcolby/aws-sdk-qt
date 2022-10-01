// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROFILEREQUEST_H
#define QTAWS_ENABLEPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT EnableProfileRequest : public RolesAnywhereRequest {

public:
    EnableProfileRequest(const EnableProfileRequest &other);
    EnableProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
