// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONNECTIONREQUEST_H
#define QTAWS_STARTCONNECTIONREQUEST_H

#include "outpostsrequest.h"

namespace QtAws {
namespace Outposts {

class StartConnectionRequestPrivate;

class QTAWSOUTPOSTS_EXPORT StartConnectionRequest : public OutpostsRequest {

public:
    StartConnectionRequest(const StartConnectionRequest &other);
    StartConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConnectionRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
