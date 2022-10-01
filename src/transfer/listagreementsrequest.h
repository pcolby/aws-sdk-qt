// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAGREEMENTSREQUEST_H
#define QTAWS_LISTAGREEMENTSREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListAgreementsRequestPrivate;

class QTAWSTRANSFER_EXPORT ListAgreementsRequest : public TransferRequest {

public:
    ListAgreementsRequest(const ListAgreementsRequest &other);
    ListAgreementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAgreementsRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
