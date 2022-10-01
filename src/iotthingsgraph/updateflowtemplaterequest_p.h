// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEFLOWTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "updateflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateFlowTemplateRequest;

class UpdateFlowTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    UpdateFlowTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   UpdateFlowTemplateRequest * const q);
    UpdateFlowTemplateRequestPrivate(const UpdateFlowTemplateRequestPrivate &other,
                                   UpdateFlowTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
