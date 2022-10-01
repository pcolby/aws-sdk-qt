// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEREQUEST_P_H
#define QTAWS_GETSERVICETEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "getservicetemplaterequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateRequest;

class GetServiceTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    GetServiceTemplateRequestPrivate(const ProtonRequest::Action action,
                                   GetServiceTemplateRequest * const q);
    GetServiceTemplateRequestPrivate(const GetServiceTemplateRequestPrivate &other,
                                   GetServiceTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
