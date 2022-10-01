// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFAQREQUEST_P_H
#define QTAWS_DELETEFAQREQUEST_P_H

#include "kendrarequest_p.h"
#include "deletefaqrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteFaqRequest;

class DeleteFaqRequestPrivate : public KendraRequestPrivate {

public:
    DeleteFaqRequestPrivate(const KendraRequest::Action action,
                                   DeleteFaqRequest * const q);
    DeleteFaqRequestPrivate(const DeleteFaqRequestPrivate &other,
                                   DeleteFaqRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFaqRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
