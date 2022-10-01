// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICETEMPLATEVERSIONREQUEST_P_H
#define QTAWS_GETSERVICETEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "getservicetemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class GetServiceTemplateVersionRequest;

class GetServiceTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    GetServiceTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   GetServiceTemplateVersionRequest * const q);
    GetServiceTemplateVersionRequestPrivate(const GetServiceTemplateVersionRequestPrivate &other,
                                   GetServiceTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
