// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMLTRANSFORMSREQUEST_P_H
#define QTAWS_LISTMLTRANSFORMSREQUEST_P_H

#include "gluerequest_p.h"
#include "listmltransformsrequest.h"

namespace QtAws {
namespace Glue {

class ListMLTransformsRequest;

class ListMLTransformsRequestPrivate : public GlueRequestPrivate {

public:
    ListMLTransformsRequestPrivate(const GlueRequest::Action action,
                                   ListMLTransformsRequest * const q);
    ListMLTransformsRequestPrivate(const ListMLTransformsRequestPrivate &other,
                                   ListMLTransformsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMLTransformsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
