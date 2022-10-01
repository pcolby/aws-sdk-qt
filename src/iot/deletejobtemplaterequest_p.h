// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTEMPLATEREQUEST_P_H
#define QTAWS_DELETEJOBTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "deletejobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobTemplateRequest;

class DeleteJobTemplateRequestPrivate : public IoTRequestPrivate {

public:
    DeleteJobTemplateRequestPrivate(const IoTRequest::Action action,
                                   DeleteJobTemplateRequest * const q);
    DeleteJobTemplateRequestPrivate(const DeleteJobTemplateRequestPrivate &other,
                                   DeleteJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
