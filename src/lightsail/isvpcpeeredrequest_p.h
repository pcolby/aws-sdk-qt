// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISVPCPEEREDREQUEST_P_H
#define QTAWS_ISVPCPEEREDREQUEST_P_H

#include "lightsailrequest_p.h"
#include "isvpcpeeredrequest.h"

namespace QtAws {
namespace Lightsail {

class IsVpcPeeredRequest;

class IsVpcPeeredRequestPrivate : public LightsailRequestPrivate {

public:
    IsVpcPeeredRequestPrivate(const LightsailRequest::Action action,
                                   IsVpcPeeredRequest * const q);
    IsVpcPeeredRequestPrivate(const IsVpcPeeredRequestPrivate &other,
                                   IsVpcPeeredRequest * const q);

private:
    Q_DECLARE_PUBLIC(IsVpcPeeredRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
