// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSSHAREREQUEST_P_H
#define QTAWS_CREATELENSSHAREREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "createlenssharerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensShareRequest;

class CreateLensShareRequestPrivate : public WellArchitectedRequestPrivate {

public:
    CreateLensShareRequestPrivate(const WellArchitectedRequest::Action action,
                                   CreateLensShareRequest * const q);
    CreateLensShareRequestPrivate(const CreateLensShareRequestPrivate &other,
                                   CreateLensShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLensShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
