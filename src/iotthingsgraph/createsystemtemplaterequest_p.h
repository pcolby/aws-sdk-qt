// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_CREATESYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "createsystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateSystemTemplateRequest;

class CreateSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    CreateSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   CreateSystemTemplateRequest * const q);
    CreateSystemTemplateRequestPrivate(const CreateSystemTemplateRequestPrivate &other,
                                   CreateSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
