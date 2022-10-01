// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESKILLGROUPREQUEST_H
#define QTAWS_CREATESKILLGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateSkillGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT CreateSkillGroupRequest : public AlexaForBusinessRequest {

public:
    CreateSkillGroupRequest(const CreateSkillGroupRequest &other);
    CreateSkillGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
