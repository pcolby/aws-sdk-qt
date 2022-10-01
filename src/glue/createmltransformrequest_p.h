// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMLTRANSFORMREQUEST_P_H
#define QTAWS_CREATEMLTRANSFORMREQUEST_P_H

#include "gluerequest_p.h"
#include "createmltransformrequest.h"

namespace QtAws {
namespace Glue {

class CreateMLTransformRequest;

class CreateMLTransformRequestPrivate : public GlueRequestPrivate {

public:
    CreateMLTransformRequestPrivate(const GlueRequest::Action action,
                                   CreateMLTransformRequest * const q);
    CreateMLTransformRequestPrivate(const CreateMLTransformRequestPrivate &other,
                                   CreateMLTransformRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
