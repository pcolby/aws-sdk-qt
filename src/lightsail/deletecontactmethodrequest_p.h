// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTMETHODREQUEST_P_H
#define QTAWS_DELETECONTACTMETHODREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletecontactmethodrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContactMethodRequest;

class DeleteContactMethodRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteContactMethodRequestPrivate(const LightsailRequest::Action action,
                                   DeleteContactMethodRequest * const q);
    DeleteContactMethodRequestPrivate(const DeleteContactMethodRequestPrivate &other,
                                   DeleteContactMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContactMethodRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
