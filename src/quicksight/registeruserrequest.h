// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSERREQUEST_H
#define QTAWS_REGISTERUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class RegisterUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT RegisterUserRequest : public QuickSightRequest {

public:
    RegisterUserRequest(const RegisterUserRequest &other);
    RegisterUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
