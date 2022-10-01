// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAGREEMENTREQUEST_H
#define QTAWS_DELETEAGREEMENTREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteAgreementRequestPrivate;

class QTAWSTRANSFER_EXPORT DeleteAgreementRequest : public TransferRequest {

public:
    DeleteAgreementRequest(const DeleteAgreementRequest &other);
    DeleteAgreementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
