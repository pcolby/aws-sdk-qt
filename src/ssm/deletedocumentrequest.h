// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTREQUEST_H
#define QTAWS_DELETEDOCUMENTREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DeleteDocumentRequestPrivate;

class QTAWSSSM_EXPORT DeleteDocumentRequest : public SsmRequest {

public:
    DeleteDocumentRequest(const DeleteDocumentRequest &other);
    DeleteDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
