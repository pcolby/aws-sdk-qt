// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSITEREQUEST_H
#define QTAWS_GETSITEREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetSiteRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetSiteRequest : public OutpostsRequest {

public:
    GetSiteRequest(const GetSiteRequest &other);
    GetSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
