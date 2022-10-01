// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREQUEST_P_H
#define QTAWS_GETFLOWTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRequest;

class GetFlowTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetFlowTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetFlowTemplateRequest * const q);
    GetFlowTemplateRequestPrivate(const GetFlowTemplateRequestPrivate &other,
                                   GetFlowTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
