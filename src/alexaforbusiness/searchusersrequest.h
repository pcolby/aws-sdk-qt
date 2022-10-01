// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHUSERSREQUEST_H
#define QTAWS_SEARCHUSERSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchUsersRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchUsersRequest : public AlexaForBusinessRequest {

public:
    SearchUsersRequest(const SearchUsersRequest &other);
    SearchUsersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchUsersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
