// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATESYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_DEPRECATESYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deprecatesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeprecateSystemTemplateRequest;

class DeprecateSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeprecateSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeprecateSystemTemplateRequest * const q);
    DeprecateSystemTemplateRequestPrivate(const DeprecateSystemTemplateRequestPrivate &other,
                                   DeprecateSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
