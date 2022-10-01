// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBDEFINITIONSREQUEST_P_H
#define QTAWS_LISTBATCHJOBDEFINITIONSREQUEST_P_H

#include "m2request_p.h"
#include "listbatchjobdefinitionsrequest.h"

namespace QtAws {
namespace M2 {

class ListBatchJobDefinitionsRequest;

class ListBatchJobDefinitionsRequestPrivate : public M2RequestPrivate {

public:
    ListBatchJobDefinitionsRequestPrivate(const M2Request::Action action,
                                   ListBatchJobDefinitionsRequest * const q);
    ListBatchJobDefinitionsRequestPrivate(const ListBatchJobDefinitionsRequestPrivate &other,
                                   ListBatchJobDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBatchJobDefinitionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
