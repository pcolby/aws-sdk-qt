// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEREQUEST_P_H
#define QTAWS_DELETESERVICETEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "deleteservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateRequest;

class DeleteServiceTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteServiceTemplateRequestPrivate(const ProtonRequest::Action action,
                                   DeleteServiceTemplateRequest * const q);
    DeleteServiceTemplateRequestPrivate(const DeleteServiceTemplateRequestPrivate &other,
                                   DeleteServiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
