// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAGREEMENTREQUEST_H
#define QTAWS_UPDATEAGREEMENTREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAgreementRequestPrivate;

class QTAWSTRANSFER_EXPORT UpdateAgreementRequest : public TransferRequest {

public:
    UpdateAgreementRequest(const UpdateAgreementRequest &other);
    UpdateAgreementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
