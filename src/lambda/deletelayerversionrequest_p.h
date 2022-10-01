// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELAYERVERSIONREQUEST_P_H
#define QTAWS_DELETELAYERVERSIONREQUEST_P_H

#include "lambdarequest_p.h"
#include "deletelayerversionrequest.h"

namespace QtAws {
namespace Lambda {

class DeleteLayerVersionRequest;

class DeleteLayerVersionRequestPrivate : public LambdaRequestPrivate {

public:
    DeleteLayerVersionRequestPrivate(const LambdaRequest::Action action,
                                   DeleteLayerVersionRequest * const q);
    DeleteLayerVersionRequestPrivate(const DeleteLayerVersionRequestPrivate &other,
                                   DeleteLayerVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLayerVersionRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
