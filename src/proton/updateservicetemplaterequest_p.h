// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICETEMPLATEREQUEST_P_H
#define QTAWS_UPDATESERVICETEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "updateservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceTemplateRequest;

class UpdateServiceTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateServiceTemplateRequestPrivate(const ProtonRequest::Action action,
                                   UpdateServiceTemplateRequest * const q);
    UpdateServiceTemplateRequestPrivate(const UpdateServiceTemplateRequestPrivate &other,
                                   UpdateServiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
