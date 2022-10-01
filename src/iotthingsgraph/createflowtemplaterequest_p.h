// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWTEMPLATEREQUEST_P_H
#define QTAWS_CREATEFLOWTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "createflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class CreateFlowTemplateRequest;

class CreateFlowTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    CreateFlowTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   CreateFlowTemplateRequest * const q);
    CreateFlowTemplateRequestPrivate(const CreateFlowTemplateRequestPrivate &other,
                                   CreateFlowTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
