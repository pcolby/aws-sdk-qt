// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_GETSYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getsystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetSystemTemplateRequest;

class GetSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetSystemTemplateRequest * const q);
    GetSystemTemplateRequestPrivate(const GetSystemTemplateRequestPrivate &other,
                                   GetSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
