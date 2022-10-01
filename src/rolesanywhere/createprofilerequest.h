// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEREQUEST_H
#define QTAWS_CREATEPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT CreateProfileRequest : public RolesAnywhereRequest {

public:
    CreateProfileRequest(const CreateProfileRequest &other);
    CreateProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
