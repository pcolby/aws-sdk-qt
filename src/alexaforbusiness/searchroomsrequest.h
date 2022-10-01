// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHROOMSREQUEST_H
#define QTAWS_SEARCHROOMSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchRoomsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchRoomsRequest : public AlexaForBusinessRequest {

public:
    SearchRoomsRequest(const SearchRoomsRequest &other);
    SearchRoomsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchRoomsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
