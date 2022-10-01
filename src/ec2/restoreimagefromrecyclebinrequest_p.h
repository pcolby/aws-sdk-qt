// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREIMAGEFROMRECYCLEBINREQUEST_P_H
#define QTAWS_RESTOREIMAGEFROMRECYCLEBINREQUEST_P_H

#include "ec2request_p.h"
#include "restoreimagefromrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreImageFromRecycleBinRequest;

class RestoreImageFromRecycleBinRequestPrivate : public Ec2RequestPrivate {

public:
    RestoreImageFromRecycleBinRequestPrivate(const Ec2Request::Action action,
                                   RestoreImageFromRecycleBinRequest * const q);
    RestoreImageFromRecycleBinRequestPrivate(const RestoreImageFromRecycleBinRequestPrivate &other,
                                   RestoreImageFromRecycleBinRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreImageFromRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
