// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLASSIFIERREQUEST_P_H
#define QTAWS_DELETECLASSIFIERREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteclassifierrequest.h"

namespace QtAws {
namespace Glue {

class DeleteClassifierRequest;

class DeleteClassifierRequestPrivate : public GlueRequestPrivate {

public:
    DeleteClassifierRequestPrivate(const GlueRequest::Action action,
                                   DeleteClassifierRequest * const q);
    DeleteClassifierRequestPrivate(const DeleteClassifierRequestPrivate &other,
                                   DeleteClassifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteClassifierRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
