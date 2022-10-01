// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTREQUEST_H
#define QTAWS_UPDATEDOCUMENTREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateDocumentRequestPrivate;

class QTAWSSSM_EXPORT UpdateDocumentRequest : public SsmRequest {

public:
    UpdateDocumentRequest(const UpdateDocumentRequest &other);
    UpdateDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
