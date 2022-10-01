// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLEOUTPUTREQUEST_P_H
#define QTAWS_GETCONSOLEOUTPUTREQUEST_P_H

#include "ec2request_p.h"
#include "getconsoleoutputrequest.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleOutputRequest;

class GetConsoleOutputRequestPrivate : public Ec2RequestPrivate {

public:
    GetConsoleOutputRequestPrivate(const Ec2Request::Action action,
                                   GetConsoleOutputRequest * const q);
    GetConsoleOutputRequestPrivate(const GetConsoleOutputRequestPrivate &other,
                                   GetConsoleOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConsoleOutputRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
