// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHSMREQUEST_P_H
#define QTAWS_MODIFYHSMREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "modifyhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHsmRequest;

class ModifyHsmRequestPrivate : public CloudHsmRequestPrivate {

public:
    ModifyHsmRequestPrivate(const CloudHsmRequest::Action action,
                                   ModifyHsmRequest * const q);
    ModifyHsmRequestPrivate(const ModifyHsmRequestPrivate &other,
                                   ModifyHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
