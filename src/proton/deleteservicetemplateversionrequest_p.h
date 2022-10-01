// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICETEMPLATEVERSIONREQUEST_P_H
#define QTAWS_DELETESERVICETEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "deleteservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteServiceTemplateVersionRequest;

class DeleteServiceTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteServiceTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   DeleteServiceTemplateVersionRequest * const q);
    DeleteServiceTemplateVersionRequestPrivate(const DeleteServiceTemplateVersionRequestPrivate &other,
                                   DeleteServiceTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
