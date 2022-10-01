// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTREQUEST_H
#define QTAWS_CREATEDOCUMENTREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class CreateDocumentRequestPrivate;

class QTAWSSSM_EXPORT CreateDocumentRequest : public SsmRequest {

public:
    CreateDocumentRequest(const CreateDocumentRequest &other);
    CreateDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
