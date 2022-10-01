// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWTEMPLATEREQUEST_P_H
#define QTAWS_DELETEFLOWTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deleteflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteFlowTemplateRequest;

class DeleteFlowTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeleteFlowTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeleteFlowTemplateRequest * const q);
    DeleteFlowTemplateRequestPrivate(const DeleteFlowTemplateRequestPrivate &other,
                                   DeleteFlowTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
