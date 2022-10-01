// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMREQUEST_P_H
#define QTAWS_GETMLTRANSFORMREQUEST_P_H

#include "gluerequest_p.h"
#include "getmltransformrequest.h"

namespace QtAws {
namespace Glue {

class GetMLTransformRequest;

class GetMLTransformRequestPrivate : public GlueRequestPrivate {

public:
    GetMLTransformRequestPrivate(const GlueRequest::Action action,
                                   GetMLTransformRequest * const q);
    GetMLTransformRequestPrivate(const GetMLTransformRequestPrivate &other,
                                   GetMLTransformRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
