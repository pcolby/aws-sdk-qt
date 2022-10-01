// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHAPGREQUEST_P_H
#define QTAWS_DELETEHAPGREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "deletehapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class DeleteHapgRequest;

class DeleteHapgRequestPrivate : public CloudHsmRequestPrivate {

public:
    DeleteHapgRequestPrivate(const CloudHsmRequest::Action action,
                                   DeleteHapgRequest * const q);
    DeleteHapgRequestPrivate(const DeleteHapgRequestPrivate &other,
                                   DeleteHapgRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
