// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSKILLGROUPSREQUEST_H
#define QTAWS_SEARCHSKILLGROUPSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchSkillGroupsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchSkillGroupsRequest : public AlexaForBusinessRequest {

public:
    SearchSkillGroupsRequest(const SearchSkillGroupsRequest &other);
    SearchSkillGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSkillGroupsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
