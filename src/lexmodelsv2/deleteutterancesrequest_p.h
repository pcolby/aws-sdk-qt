// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUTTERANCESREQUEST_P_H
#define QTAWS_DELETEUTTERANCESREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteutterancesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteUtterancesRequest;

class DeleteUtterancesRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteUtterancesRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteUtterancesRequest * const q);
    DeleteUtterancesRequestPrivate(const DeleteUtterancesRequestPrivate &other,
                                   DeleteUtterancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUtterancesRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
