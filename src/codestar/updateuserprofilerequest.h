// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILEREQUEST_H
#define QTAWS_UPDATEUSERPROFILEREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class UpdateUserProfileRequestPrivate;

class QTAWSCODESTAR_EXPORT UpdateUserProfileRequest : public CodeStarRequest {

public:
    UpdateUserProfileRequest(const UpdateUserProfileRequest &other);
    UpdateUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserProfileRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
