// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGINPROFILEREQUEST_P_H
#define QTAWS_DELETELOGINPROFILEREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteloginprofilerequest.h"

namespace QtAws {
namespace Iam {

class DeleteLoginProfileRequest;

class DeleteLoginProfileRequestPrivate : public IamRequestPrivate {

public:
    DeleteLoginProfileRequestPrivate(const IamRequest::Action action,
                                   DeleteLoginProfileRequest * const q);
    DeleteLoginProfileRequestPrivate(const DeleteLoginProfileRequestPrivate &other,
                                   DeleteLoginProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoginProfileRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
