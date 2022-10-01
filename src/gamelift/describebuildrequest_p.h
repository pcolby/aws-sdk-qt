// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUILDREQUEST_P_H
#define QTAWS_DESCRIBEBUILDREQUEST_P_H

#include "gameliftrequest_p.h"
#include "describebuildrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeBuildRequest;

class DescribeBuildRequestPrivate : public GameLiftRequestPrivate {

public:
    DescribeBuildRequestPrivate(const GameLiftRequest::Action action,
                                   DescribeBuildRequest * const q);
    DescribeBuildRequestPrivate(const DescribeBuildRequestPrivate &other,
                                   DescribeBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBuildRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
