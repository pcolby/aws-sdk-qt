// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFIERSREQUEST_P_H
#define QTAWS_GETCLASSIFIERSREQUEST_P_H

#include "gluerequest_p.h"
#include "getclassifiersrequest.h"

namespace QtAws {
namespace Glue {

class GetClassifiersRequest;

class GetClassifiersRequestPrivate : public GlueRequestPrivate {

public:
    GetClassifiersRequestPrivate(const GlueRequest::Action action,
                                   GetClassifiersRequest * const q);
    GetClassifiersRequestPrivate(const GetClassifiersRequestPrivate &other,
                                   GetClassifiersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetClassifiersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
