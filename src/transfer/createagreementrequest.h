// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAGREEMENTREQUEST_H
#define QTAWS_CREATEAGREEMENTREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class CreateAgreementRequestPrivate;

class QTAWSTRANSFER_EXPORT CreateAgreementRequest : public TransferRequest {

public:
    CreateAgreementRequest(const CreateAgreementRequest &other);
    CreateAgreementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
