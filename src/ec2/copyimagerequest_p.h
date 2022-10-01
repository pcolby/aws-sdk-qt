// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGEREQUEST_P_H
#define QTAWS_COPYIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "copyimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CopyImageRequest;

class CopyImageRequestPrivate : public Ec2RequestPrivate {

public:
    CopyImageRequestPrivate(const Ec2Request::Action action,
                                   CopyImageRequest * const q);
    CopyImageRequestPrivate(const CopyImageRequestPrivate &other,
                                   CopyImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
