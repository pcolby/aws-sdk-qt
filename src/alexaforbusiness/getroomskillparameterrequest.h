// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMSKILLPARAMETERREQUEST_H
#define QTAWS_GETROOMSKILLPARAMETERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetRoomSkillParameterRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetRoomSkillParameterRequest : public AlexaForBusinessRequest {

public:
    GetRoomSkillParameterRequest(const GetRoomSkillParameterRequest &other);
    GetRoomSkillParameterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoomSkillParameterRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
