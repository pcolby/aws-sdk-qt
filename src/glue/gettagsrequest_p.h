// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSREQUEST_P_H
#define QTAWS_GETTAGSREQUEST_P_H

#include "gluerequest_p.h"
#include "gettagsrequest.h"

namespace QtAws {
namespace Glue {

class GetTagsRequest;

class GetTagsRequestPrivate : public GlueRequestPrivate {

public:
    GetTagsRequestPrivate(const GlueRequest::Action action,
                                   GetTagsRequest * const q);
    GetTagsRequestPrivate(const GetTagsRequestPrivate &other,
                                   GetTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTagsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
