// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTTEMPLATEVERSIONREQUEST_P_H

#include "protonrequest_p.h"
#include "deleteenvironmenttemplateversionrequest.h"

namespace QtAws {
namespace Proton {

class DeleteEnvironmentTemplateVersionRequest;

class DeleteEnvironmentTemplateVersionRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteEnvironmentTemplateVersionRequestPrivate(const ProtonRequest::Action action,
                                   DeleteEnvironmentTemplateVersionRequest * const q);
    DeleteEnvironmentTemplateVersionRequestPrivate(const DeleteEnvironmentTemplateVersionRequestPrivate &other,
                                   DeleteEnvironmentTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentTemplateVersionRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
