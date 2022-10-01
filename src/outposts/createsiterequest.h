// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITEREQUEST_H
#define QTAWS_CREATESITEREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class CreateSiteRequestPrivate;

class QTAWSOUTPOSTS_EXPORT CreateSiteRequest : public OutpostsRequest {

public:
    CreateSiteRequest(const CreateSiteRequest &other);
    CreateSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
