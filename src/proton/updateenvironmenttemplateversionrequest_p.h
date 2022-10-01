// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "updateenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateEnvironmentTemplateVersionRequest;

class UpdateEnvironmentTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateEnvironmentTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   UpdateEnvironmentTemplateVersionRequest * const q);
    UpdateEnvironmentTemplateVersionRequestPrivate(const UpdateEnvironmentTemplateVersionRequestPrivate &other,
                                   UpdateEnvironmentTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
