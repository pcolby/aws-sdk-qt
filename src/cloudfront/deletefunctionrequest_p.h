// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONREQUEST_P_H
#define QTAWS_DELETEFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletefunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFunctionRequest;

class DeleteFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteFunctionRequest * const q);
    DeleteFunctionRequestPrivate(const DeleteFunctionRequestPrivate &other,
                                   DeleteFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
