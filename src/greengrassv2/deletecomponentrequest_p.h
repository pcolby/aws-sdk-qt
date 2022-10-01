// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTREQUEST_P_H
#define QTAWS_DELETECOMPONENTREQUEST_P_H

#include "greengrassv2request_p.h"
#include "deletecomponentrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteComponentRequest;

class DeleteComponentRequestPrivate : public GreengrassV2RequestPrivate {

public:
    DeleteComponentRequestPrivate(const GreengrassV2Request::Action action,
                                   DeleteComponentRequest * const q);
    DeleteComponentRequestPrivate(const DeleteComponentRequestPrivate &other,
                                   DeleteComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
