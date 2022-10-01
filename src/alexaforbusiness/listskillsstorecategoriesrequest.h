// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORECATEGORIESREQUEST_H
#define QTAWS_LISTSKILLSSTORECATEGORIESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreCategoriesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSkillsStoreCategoriesRequest : public AlexaForBusinessRequest {

public:
    ListSkillsStoreCategoriesRequest(const ListSkillsStoreCategoriesRequest &other);
    ListSkillsStoreCategoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSkillsStoreCategoriesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
