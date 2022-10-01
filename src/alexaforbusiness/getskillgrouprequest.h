// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSKILLGROUPREQUEST_H
#define QTAWS_GETSKILLGROUPREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetSkillGroupRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetSkillGroupRequest : public AlexaForBusinessRequest {

public:
    GetSkillGroupRequest(const GetSkillGroupRequest &other);
    GetSkillGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSkillGroupRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
