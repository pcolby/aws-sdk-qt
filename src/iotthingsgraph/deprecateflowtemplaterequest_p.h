// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEFLOWTEMPLATEREQUEST_P_H
#define QTAWS_DEPRECATEFLOWTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deprecateflowtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateFlowTemplateRequest;

class DeprecateFlowTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeprecateFlowTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeprecateFlowTemplateRequest * const q);
    DeprecateFlowTemplateRequestPrivate(const DeprecateFlowTemplateRequestPrivate &other,
                                   DeprecateFlowTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateFlowTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
