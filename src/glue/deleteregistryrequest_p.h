// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYREQUEST_P_H
#define QTAWS_DELETEREGISTRYREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteregistryrequest.h"

namespace QtAws {
namespace Glue {

class DeleteRegistryRequest;

class DeleteRegistryRequestPrivate : public GlueRequestPrivate {

public:
    DeleteRegistryRequestPrivate(const GlueRequest::Action action,
                                   DeleteRegistryRequest * const q);
    DeleteRegistryRequestPrivate(const DeleteRegistryRequestPrivate &other,
                                   DeleteRegistryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegistryRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
