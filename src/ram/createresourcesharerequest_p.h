// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESHAREREQUEST_P_H
#define QTAWS_CREATERESOURCESHAREREQUEST_P_H

#include "ramrequest_p.h"
#include "createresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class CreateResourceShareRequest;

class CreateResourceShareRequestPrivate : public RamRequestPrivate {

public:
    CreateResourceShareRequestPrivate(const RamRequest::Action action,
                                   CreateResourceShareRequest * const q);
    CreateResourceShareRequestPrivate(const CreateResourceShareRequestPrivate &other,
                                   CreateResourceShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
