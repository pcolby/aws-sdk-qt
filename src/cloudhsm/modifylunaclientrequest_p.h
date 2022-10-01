// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLUNACLIENTREQUEST_P_H
#define QTAWS_MODIFYLUNACLIENTREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "modifylunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class ModifyLunaClientRequest;

class ModifyLunaClientRequestPrivate : public CloudHsmRequestPrivate {

public:
    ModifyLunaClientRequestPrivate(const CloudHsmRequest::Action action,
                                   ModifyLunaClientRequest * const q);
    ModifyLunaClientRequestPrivate(const ModifyLunaClientRequestPrivate &other,
                                   ModifyLunaClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
