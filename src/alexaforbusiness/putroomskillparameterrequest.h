// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROOMSKILLPARAMETERREQUEST_H
#define QTAWS_PUTROOMSKILLPARAMETERREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutRoomSkillParameterRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutRoomSkillParameterRequest : public AlexaForBusinessRequest {

public:
    PutRoomSkillParameterRequest(const PutRoomSkillParameterRequest &other);
    PutRoomSkillParameterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRoomSkillParameterRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
