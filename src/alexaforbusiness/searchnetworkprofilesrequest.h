// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHNETWORKPROFILESREQUEST_H
#define QTAWS_SEARCHNETWORKPROFILESREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchNetworkProfilesRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchNetworkProfilesRequest : public AlexaForBusinessRequest {

public:
    SearchNetworkProfilesRequest(const SearchNetworkProfilesRequest &other);
    SearchNetworkProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchNetworkProfilesRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
