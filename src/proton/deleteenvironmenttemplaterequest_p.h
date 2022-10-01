// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEREQUEST_P_H

#include "protonrequest_p.h"
#include "deleteenvironmenttemplaterequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateRequest;

class DeleteEnvironmentTemplateRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteEnvironmentTemplateRequestPrivate(const ProtonRequest::Action action,
                                   DeleteEnvironmentTemplateRequest * const q);
    DeleteEnvironmentTemplateRequestPrivate(const DeleteEnvironmentTemplateRequestPrivate &other,
                                   DeleteEnvironmentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentTemplateRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
