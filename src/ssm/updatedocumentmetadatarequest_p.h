// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTMETADATAREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTMETADATAREQUEST_P_H

#include "ssmrequest_p.h"
#include "updatedocumentmetadatarequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentMetadataRequest;

class UpdateDocumentMetadataRequestPrivate : public SsmRequestPrivate {

public:
    UpdateDocumentMetadataRequestPrivate(const SsmRequest::Action action,
                                   UpdateDocumentMetadataRequest * const q);
    UpdateDocumentMetadataRequestPrivate(const UpdateDocumentMetadataRequestPrivate &other,
                                   UpdateDocumentMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
