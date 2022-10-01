// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEREQUEST_H
#define QTAWS_GETPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetProfileRequest : public AlexaForBusinessRequest {

public:
    GetProfileRequest(const GetProfileRequest &other);
    GetProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
