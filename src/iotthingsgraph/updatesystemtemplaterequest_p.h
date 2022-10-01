// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_UPDATESYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "updatesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class UpdateSystemTemplateRequest;

class UpdateSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    UpdateSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   UpdateSystemTemplateRequest * const q);
    UpdateSystemTemplateRequestPrivate(const UpdateSystemTemplateRequestPrivate &other,
                                   UpdateSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
