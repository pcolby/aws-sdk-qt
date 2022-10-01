// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEADDRESSREQUEST_H
#define QTAWS_GETSITEADDRESSREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteAddressRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetSiteAddressRequest : public OutpostsRequest {

public:
    GetSiteAddressRequest(const GetSiteAddressRequest &other);
    GetSiteAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteAddressRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
