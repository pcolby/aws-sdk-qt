// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGINEVERSIONSREQUEST_P_H
#define QTAWS_LISTENGINEVERSIONSREQUEST_P_H

#include "m2request_p.h"
#include "listengineversionsrequest.h"

namespace QtAws {
namespace M2 {

class ListEngineVersionsRequest;

class ListEngineVersionsRequestPrivate : public M2RequestPrivate {

public:
    ListEngineVersionsRequestPrivate(const M2Request::Action action,
                                   ListEngineVersionsRequest * const q);
    ListEngineVersionsRequestPrivate(const ListEngineVersionsRequestPrivate &other,
                                   ListEngineVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEngineVersionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
