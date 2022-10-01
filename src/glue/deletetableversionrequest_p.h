// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEVERSIONREQUEST_P_H
#define QTAWS_DELETETABLEVERSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deletetableversionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteTableVersionRequest;

class DeleteTableVersionRequestPrivate : public GlueRequestPrivate {

public:
    DeleteTableVersionRequestPrivate(const GlueRequest::Action action,
                                   DeleteTableVersionRequest * const q);
    DeleteTableVersionRequestPrivate(const DeleteTableVersionRequestPrivate &other,
                                   DeleteTableVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTableVersionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
