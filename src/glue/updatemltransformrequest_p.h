// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLTRANSFORMREQUEST_P_H
#define QTAWS_UPDATEMLTRANSFORMREQUEST_P_H

#include "gluerequest_p.h"
#include "updatemltransformrequest.h"

namespace QtAws {
namespace Glue {

class UpdateMLTransformRequest;

class UpdateMLTransformRequestPrivate : public GlueRequestPrivate {

public:
    UpdateMLTransformRequestPrivate(const GlueRequest::Action action,
                                   UpdateMLTransformRequest * const q);
    UpdateMLTransformRequestPrivate(const UpdateMLTransformRequestPrivate &other,
                                   UpdateMLTransformRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
