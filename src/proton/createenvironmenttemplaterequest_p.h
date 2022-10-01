// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTTEMPLATEREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTTEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "createenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class CreateEnvironmentTemplateRequest;

class CreateEnvironmentTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    CreateEnvironmentTemplateRequestPrivate(const ProtonRequest::Action action,
                                   CreateEnvironmentTemplateRequest * const q);
    CreateEnvironmentTemplateRequestPrivate(const CreateEnvironmentTemplateRequestPrivate &other,
                                   CreateEnvironmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
