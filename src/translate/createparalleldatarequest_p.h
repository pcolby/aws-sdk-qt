// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARALLELDATAREQUEST_P_H
#define QTAWS_CREATEPARALLELDATAREQUEST_P_H

#include "translaterequest_p.h"
#include "createparalleldatarequest.h"

namespace QtAws {
namespace Translate {

class CreateParallelDataRequest;

class CreateParallelDataRequestPrivate : public TranslateRequestPrivate {

public:
    CreateParallelDataRequestPrivate(const TranslateRequest::Action action,
                                   CreateParallelDataRequest * const q);
    CreateParallelDataRequestPrivate(const CreateParallelDataRequestPrivate &other,
                                   CreateParallelDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
