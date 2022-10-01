// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPETEMPLATESREQUEST_H
#define QTAWS_LISTPROFILEOBJECTTYPETEMPLATESREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypeTemplatesRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListProfileObjectTypeTemplatesRequest : public CustomerProfilesRequest {

public:
    ListProfileObjectTypeTemplatesRequest(const ListProfileObjectTypeTemplatesRequest &other);
    ListProfileObjectTypeTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfileObjectTypeTemplatesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
