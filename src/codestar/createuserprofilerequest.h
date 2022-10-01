// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILEREQUEST_H
#define QTAWS_CREATEUSERPROFILEREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class CreateUserProfileRequestPrivate;

class QTAWSCODESTAR_EXPORT CreateUserProfileRequest : public CodeStarRequest {

public:
    CreateUserProfileRequest(const CreateUserProfileRequest &other);
    CreateUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserProfileRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
