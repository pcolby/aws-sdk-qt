// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEADDRESSREQUEST_H
#define QTAWS_UPDATESITEADDRESSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteAddressRequestPrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteAddressRequest : public OutpostsRequest {

public:
    UpdateSiteAddressRequest(const UpdateSiteAddressRequest &other);
    UpdateSiteAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteAddressRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
