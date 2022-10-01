// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSREQUEST_H
#define QTAWS_LISTSKILLSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSkillsRequest : public AlexaForBusinessRequest {

public:
    ListSkillsRequest(const ListSkillsRequest &other);
    ListSkillsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSkillsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
