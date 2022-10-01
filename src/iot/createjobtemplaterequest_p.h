// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATEREQUEST_P_H
#define QTAWS_CREATEJOBTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "createjobtemplaterequest.h"

namespace QtAws {
namespace IoT {

class CreateJobTemplateRequest;

class CreateJobTemplateRequestPrivate : public IoTRequestPrivate {

public:
    CreateJobTemplateRequestPrivate(const IoTRequest::Action action,
                                   CreateJobTemplateRequest * const q);
    CreateJobTemplateRequestPrivate(const CreateJobTemplateRequestPrivate &other,
                                   CreateJobTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
