// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTACTSREQUEST_H
#define QTAWS_SEARCHCONTACTSREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchContactsRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchContactsRequest : public AlexaForBusinessRequest {

public:
    SearchContactsRequest(const SearchContactsRequest &other);
    SearchContactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchContactsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
