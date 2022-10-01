// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROFILESREQUEST_H
#define QTAWS_SEARCHPROFILESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchProfilesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchProfilesRequest : public AlexaForBusinessRequest {

public:
    SearchProfilesRequest(const SearchProfilesRequest &other);
    SearchProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchProfilesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
