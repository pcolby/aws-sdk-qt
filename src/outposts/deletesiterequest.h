// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESITEREQUEST_H
#define QTAWS_DELETESITEREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class DeleteSiteRequestPrivate;

class QTAWSOUTPOSTS_EXPORT DeleteSiteRequest : public OutpostsRequest {

public:
    DeleteSiteRequest(const DeleteSiteRequest &other);
    DeleteSiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSiteRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
