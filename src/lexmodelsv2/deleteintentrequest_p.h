// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTREQUEST_P_H
#define QTAWS_DELETEINTENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deleteintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteIntentRequest;

class DeleteIntentRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteIntentRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteIntentRequest * const q);
    DeleteIntentRequestPrivate(const DeleteIntentRequestPrivate &other,
                                   DeleteIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
