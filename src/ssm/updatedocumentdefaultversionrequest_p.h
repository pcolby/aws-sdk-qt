// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTDEFAULTVERSIONREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTDEFAULTVERSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatedocumentdefaultversionrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentDefaultVersionRequest;

class UpdateDocumentDefaultVersionRequestPrivate : public SsmRequestPrivate {

public:
    UpdateDocumentDefaultVersionRequestPrivate(const SsmRequest::Action action,
                                   UpdateDocumentDefaultVersionRequest * const q);
    UpdateDocumentDefaultVersionRequestPrivate(const UpdateDocumentDefaultVersionRequestPrivate &other,
                                   UpdateDocumentDefaultVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentDefaultVersionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
