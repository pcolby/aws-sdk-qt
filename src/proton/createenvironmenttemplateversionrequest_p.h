// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "createenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateVersionRequest;

class CreateEnvironmentTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    CreateEnvironmentTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   CreateEnvironmentTemplateVersionRequest * const q);
    CreateEnvironmentTemplateVersionRequestPrivate(const CreateEnvironmentTemplateVersionRequestPrivate &other,
                                   CreateEnvironmentTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
