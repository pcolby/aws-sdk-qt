// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMSREQUEST_P_H
#define QTAWS_GETMLTRANSFORMSREQUEST_P_H

#include "gluerequest_p.h"
#include "getmltransformsrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTransformsRequest;

class GetMLTransformsRequestPrivate : public GlueRequestPrivate {

public:
    GetMLTransformsRequestPrivate(const GlueRequest::Action action,
                                   GetMLTransformsRequest * const q);
    GetMLTransformsRequestPrivate(const GetMLTransformsRequestPrivate &other,
                                   GetMLTransformsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMLTransformsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
