// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "updateenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateRequest;

class UpdateEnvironmentTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateEnvironmentTemplateRequestPrivate(const ProtonRequest::Action action,
                                   UpdateEnvironmentTemplateRequest * const q);
    UpdateEnvironmentTemplateRequestPrivate(const UpdateEnvironmentTemplateRequestPrivate &other,
                                   UpdateEnvironmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
