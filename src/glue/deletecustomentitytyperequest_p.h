// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMENTITYTYPEREQUEST_P_H
#define QTAWS_DELETECUSTOMENTITYTYPEREQUEST_P_H

#include "gluerequest_p.h"
#include "deletecustomentitytyperequest.h"

namespace QtAws {
namespace Glue {

class DeleteCustomEntityTypeRequest;

class DeleteCustomEntityTypeRequestPrivate : public GlueRequestPrivate {

public:
    DeleteCustomEntityTypeRequestPrivate(const GlueRequest::Action action,
                                   DeleteCustomEntityTypeRequest * const q);
    DeleteCustomEntityTypeRequestPrivate(const DeleteCustomEntityTypeRequestPrivate &other,
                                   DeleteCustomEntityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomEntityTypeRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
