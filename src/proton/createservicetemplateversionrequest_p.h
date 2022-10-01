// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICETEMPLATEVERSIONREQUEST_P_H
#define QTAWS_CREATESERVICETEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "createservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class CreateServiceTemplateVersionRequest;

class CreateServiceTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    CreateServiceTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   CreateServiceTemplateVersionRequest * const q);
    CreateServiceTemplateVersionRequestPrivate(const CreateServiceTemplateVersionRequestPrivate &other,
                                   CreateServiceTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
