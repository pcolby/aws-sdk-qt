// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTTYPEREQUEST_H
#define QTAWS_PUTPROFILEOBJECTTYPEREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectTypeRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutProfileObjectTypeRequest : public CustomerProfilesRequest {

public:
    PutProfileObjectTypeRequest(const PutProfileObjectTypeRequest &other);
    PutProfileObjectTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
