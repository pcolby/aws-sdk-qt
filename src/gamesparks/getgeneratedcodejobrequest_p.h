// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGENERATEDCODEJOBREQUEST_P_H
#define QTAWS_GETGENERATEDCODEJOBREQUEST_P_H

#include "gamesparksrequest_p.h"
#include "getgeneratedcodejobrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGeneratedCodeJobRequest;

class GetGeneratedCodeJobRequestPrivate : public GameSparksRequestPrivate {

public:
    GetGeneratedCodeJobRequestPrivate(const GameSparksRequest::Action action,
                                   GetGeneratedCodeJobRequest * const q);
    GetGeneratedCodeJobRequestPrivate(const GetGeneratedCodeJobRequestPrivate &other,
                                   GetGeneratedCodeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGeneratedCodeJobRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
