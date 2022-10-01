// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHAPGREQUEST_P_H
#define QTAWS_MODIFYHAPGREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "modifyhapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHapgRequest;

class ModifyHapgRequestPrivate : public CloudHsmRequestPrivate {

public:
    ModifyHapgRequestPrivate(const CloudHsmRequest::Action action,
                                   ModifyHapgRequest * const q);
    ModifyHapgRequestPrivate(const ModifyHapgRequestPrivate &other,
                                   ModifyHapgRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
