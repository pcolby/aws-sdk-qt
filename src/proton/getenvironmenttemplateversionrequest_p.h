// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_GETENVIRONMENTTEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "getenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateVersionRequest;

class GetEnvironmentTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    GetEnvironmentTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   GetEnvironmentTemplateVersionRequest * const q);
    GetEnvironmentTemplateVersionRequestPrivate(const GetEnvironmentTemplateVersionRequestPrivate &other,
                                   GetEnvironmentTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
