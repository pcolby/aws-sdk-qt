// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXREQUEST_P_H
#define QTAWS_UPDATEINDEXREQUEST_P_H

#include "kendrarequest_p.h"
#include "updateindexrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateIndexRequest;

class UpdateIndexRequestPrivate : public KendraRequestPrivate {

public:
    UpdateIndexRequestPrivate(const KendraRequest::Action action,
                                   UpdateIndexRequest * const q);
    UpdateIndexRequestPrivate(const UpdateIndexRequestPrivate &other,
                                   UpdateIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
