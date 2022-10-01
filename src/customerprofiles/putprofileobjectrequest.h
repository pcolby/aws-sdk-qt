// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTREQUEST_H
#define QTAWS_PUTPROFILEOBJECTREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT PutProfileObjectRequest : public CustomerProfilesRequest {

public:
    PutProfileObjectRequest(const PutProfileObjectRequest &other);
    PutProfileObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProfileObjectRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
