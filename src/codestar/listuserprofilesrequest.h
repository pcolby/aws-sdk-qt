// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESREQUEST_H
#define QTAWS_LISTUSERPROFILESREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class ListUserProfilesRequestPrivate;

class QTAWSCODESTAR_EXPORT ListUserProfilesRequest : public CodeStarRequest {

public:
    ListUserProfilesRequest(const ListUserProfilesRequest &other);
    ListUserProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserProfilesRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
