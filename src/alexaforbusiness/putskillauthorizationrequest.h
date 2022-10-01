// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSKILLAUTHORIZATIONREQUEST_H
#define QTAWS_PUTSKILLAUTHORIZATIONREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutSkillAuthorizationRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT PutSkillAuthorizationRequest : public AlexaForBusinessRequest {

public:
    PutSkillAuthorizationRequest(const PutSkillAuthorizationRequest &other);
    PutSkillAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSkillAuthorizationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
