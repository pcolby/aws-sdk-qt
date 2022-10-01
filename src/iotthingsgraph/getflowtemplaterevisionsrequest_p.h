// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFLOWTEMPLATEREVISIONSREQUEST_P_H
#define QTAWS_GETFLOWTEMPLATEREVISIONSREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getflowtemplaterevisionsrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetFlowTemplateRevisionsRequest;

class GetFlowTemplateRevisionsRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetFlowTemplateRevisionsRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetFlowTemplateRevisionsRequest * const q);
    GetFlowTemplateRevisionsRequestPrivate(const GetFlowTemplateRevisionsRequestPrivate &other,
                                   GetFlowTemplateRevisionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFlowTemplateRevisionsRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
