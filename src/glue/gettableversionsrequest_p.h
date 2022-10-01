// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONSREQUEST_P_H
#define QTAWS_GETTABLEVERSIONSREQUEST_P_H

#include "gluerequest_p.h"
#include "gettableversionsrequest.h"

namespace QtAws {
namespace Glue {

class GetTableVersionsRequest;

class GetTableVersionsRequestPrivate : public GlueRequestPrivate {

public:
    GetTableVersionsRequestPrivate(const GlueRequest::Action action,
                                   GetTableVersionsRequest * const q);
    GetTableVersionsRequestPrivate(const GetTableVersionsRequestPrivate &other,
                                   GetTableVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTableVersionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
