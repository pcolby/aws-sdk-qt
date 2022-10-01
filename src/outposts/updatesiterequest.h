// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESITEREQUEST_H
#define QTAWS_UPDATESITEREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateSiteRequestPrivate;

class QTAWSOUTPOSTS_EXPORT UpdateSiteRequest : public OutpostsRequest {

public:
    UpdateSiteRequest(const UpdateSiteRequest &other);
    UpdateSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
