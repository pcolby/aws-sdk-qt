// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEVERSIONREQUEST_P_H
#define QTAWS_UPDATESERVICETEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "updateservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateVersionRequest;

class UpdateServiceTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateServiceTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   UpdateServiceTemplateVersionRequest * const q);
    UpdateServiceTemplateVersionRequestPrivate(const UpdateServiceTemplateVersionRequestPrivate &other,
                                   UpdateServiceTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
