// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBEXECUTIONSREQUEST_P_H
#define QTAWS_LISTBATCHJOBEXECUTIONSREQUEST_P_H

#include "m2request_p.h"
#include "listbatchjobexecutionsrequest.h"

namespace QtAws {
namespace M2 {

class ListBatchJobExecutionsRequest;

class ListBatchJobExecutionsRequestPrivate : public M2RequestPrivate {

public:
    ListBatchJobExecutionsRequestPrivate(const M2Request::Action action,
                                   ListBatchJobExecutionsRequest * const q);
    ListBatchJobExecutionsRequestPrivate(const ListBatchJobExecutionsRequestPrivate &other,
                                   ListBatchJobExecutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBatchJobExecutionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
