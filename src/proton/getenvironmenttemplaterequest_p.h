// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTTEMPLATEREQUEST_P_H
#define QTAWS_GETENVIRONMENTTEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "getenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class GetEnvironmentTemplateRequest;

class GetEnvironmentTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    GetEnvironmentTemplateRequestPrivate(const ProtonRequest::Action action,
                                   GetEnvironmentTemplateRequest * const q);
    GetEnvironmentTemplateRequestPrivate(const GetEnvironmentTemplateRequestPrivate &other,
                                   GetEnvironmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
