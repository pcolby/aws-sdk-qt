// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCRIPTREQUEST_P_H
#define QTAWS_DESCRIBESCRIPTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describescriptrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeScriptRequest;

class DescribeScriptRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeScriptRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeScriptRequest * const q);
    DescribeScriptRequestPrivate(const DescribeScriptRequestPrivate &other,
                                   DescribeScriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
