// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONREQUEST_H
#define QTAWS_GETCONNECTIONREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class GetConnectionRequestPrivate;

class QTAWSOUTPOSTS_EXPORT GetConnectionRequest : public OutpostsRequest {

public:
    GetConnectionRequest(const GetConnectionRequest &other);
    GetConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectionRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
