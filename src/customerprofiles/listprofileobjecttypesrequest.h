// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPESREQUEST_H
#define QTAWS_LISTPROFILEOBJECTTYPESREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypesRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectTypesRequest : public CustomerProfilesRequest {

public:
    ListProfileObjectTypesRequest(const ListProfileObjectTypesRequest &other);
    ListProfileObjectTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectTypesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
