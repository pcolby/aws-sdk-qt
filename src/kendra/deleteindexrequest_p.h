// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXREQUEST_P_H
#define QTAWS_DELETEINDEXREQUEST_P_H

#include "kendrarequest_p.h"
#include "deleteindexrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteIndexRequest;

class DeleteIndexRequestPrivate : public KendraRequestPrivate {

public:
    DeleteIndexRequestPrivate(const KendraRequest::Action action,
                                   DeleteIndexRequest * const q);
    DeleteIndexRequestPrivate(const DeleteIndexRequestPrivate &other,
                                   DeleteIndexRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
