// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESYSTEMTEMPLATEREQUEST_P_H
#define QTAWS_DELETESYSTEMTEMPLATEREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "deletesystemtemplaterequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DeleteSystemTemplateRequest;

class DeleteSystemTemplateRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DeleteSystemTemplateRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DeleteSystemTemplateRequest * const q);
    DeleteSystemTemplateRequestPrivate(const DeleteSystemTemplateRequestPrivate &other,
                                   DeleteSystemTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSystemTemplateRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
