// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBLUEPRINTREQUEST_P_H
#define QTAWS_DELETEBLUEPRINTREQUEST_P_H

#include "gluerequest_p.h"
#include "deleteblueprintrequest.h"

namespace QtAws {
namespace Glue {

class DeleteBlueprintRequest;

class DeleteBlueprintRequestPrivate : public GlueRequestPrivate {

public:
    DeleteBlueprintRequestPrivate(const GlueRequest::Action action,
                                   DeleteBlueprintRequest * const q);
    DeleteBlueprintRequestPrivate(const DeleteBlueprintRequestPrivate &other,
                                   DeleteBlueprintRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBlueprintRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
