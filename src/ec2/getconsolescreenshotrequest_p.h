// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLESCREENSHOTREQUEST_P_H
#define QTAWS_GETCONSOLESCREENSHOTREQUEST_P_H

#include "ec2request_p.h"
#include "getconsolescreenshotrequest.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleScreenshotRequest;

class GetConsoleScreenshotRequestPrivate : public Ec2RequestPrivate {

public:
    GetConsoleScreenshotRequestPrivate(const Ec2Request::Action action,
                                   GetConsoleScreenshotRequest * const q);
    GetConsoleScreenshotRequestPrivate(const GetConsoleScreenshotRequestPrivate &other,
                                   GetConsoleScreenshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConsoleScreenshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
