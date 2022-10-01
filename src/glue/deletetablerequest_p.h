// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEREQUEST_P_H
#define QTAWS_DELETETABLEREQUEST_P_H

#include "gluerequest_p.h"
#include "deletetablerequest.h"

namespace QtAws {
namespace Glue {

class DeleteTableRequest;

class DeleteTableRequestPrivate : public GlueRequestPrivate {

public:
    DeleteTableRequestPrivate(const GlueRequest::Action action,
                                   DeleteTableRequest * const q);
    DeleteTableRequestPrivate(const DeleteTableRequestPrivate &other,
                                   DeleteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTableRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
