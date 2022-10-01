// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARALLELDATAREQUEST_P_H
#define QTAWS_UPDATEPARALLELDATAREQUEST_P_H

#include "translaterequest_p.h"
#include "updateparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class UpdateParallelDataRequest;

class UpdateParallelDataRequestPrivate : public TranslateRequestPrivate {

public:
    UpdateParallelDataRequestPrivate(const TranslateRequest::Action action,
                                   UpdateParallelDataRequest * const q);
    UpdateParallelDataRequestPrivate(const UpdateParallelDataRequestPrivate &other,
                                   UpdateParallelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
