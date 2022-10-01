// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHAPGREQUEST_P_H
#define QTAWS_CREATEHAPGREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "createhapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHapgRequest;

class CreateHapgRequestPrivate : public CloudHsmRequestPrivate {

public:
    CreateHapgRequestPrivate(const CloudHsmRequest::Action action,
                                   CreateHapgRequest * const q);
    CreateHapgRequestPrivate(const CreateHapgRequestPrivate &other,
                                   CreateHapgRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
