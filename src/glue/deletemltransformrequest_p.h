// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLTRANSFORMREQUEST_P_H
#define QTAWS_DELETEMLTRANSFORMREQUEST_P_H

#include "gluerequest_p.h"
#include "deletemltransformrequest.h"

namespace QtAws {
namespace Glue {

class DeleteMLTransformRequest;

class DeleteMLTransformRequestPrivate : public GlueRequestPrivate {

public:
    DeleteMLTransformRequestPrivate(const GlueRequest::Action action,
                                   DeleteMLTransformRequest * const q);
    DeleteMLTransformRequestPrivate(const DeleteMLTransformRequestPrivate &other,
                                   DeleteMLTransformRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMLTransformRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
