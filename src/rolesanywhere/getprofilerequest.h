// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEREQUEST_H
#define QTAWS_GETPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT GetProfileRequest : public RolesAnywhereRequest {

public:
    GetProfileRequest(const GetProfileRequest &other);
    GetProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
