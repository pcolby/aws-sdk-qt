// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEREQUEST_H
#define QTAWS_UPDATEPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateProfileRequest : public AlexaForBusinessRequest {

public:
    UpdateProfileRequest(const UpdateProfileRequest &other);
    UpdateProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
