// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMATCHESREQUEST_H
#define QTAWS_GETMATCHESREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetMatchesRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetMatchesRequest : public CustomerProfilesRequest {

public:
    GetMatchesRequest(const GetMatchesRequest &other);
    GetMatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMatchesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
