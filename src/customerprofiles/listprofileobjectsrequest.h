// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTSREQUEST_H
#define QTAWS_LISTPROFILEOBJECTSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectsRequest : public CustomerProfilesRequest {

public:
    ListProfileObjectsRequest(const ListProfileObjectsRequest &other);
    ListProfileObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
