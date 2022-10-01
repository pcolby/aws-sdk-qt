// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTMETADATAREQUEST_H
#define QTAWS_UPDATEDOCUMENTMETADATAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentMetadataRequestPrivate;

class QTAWSSSM_EXPORT UpdateDocumentMetadataRequest : public SsmRequest {

public:
    UpdateDocumentMetadataRequest(const UpdateDocumentMetadataRequest &other);
    UpdateDocumentMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentMetadataRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
