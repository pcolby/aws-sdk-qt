// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXTENDTRANSACTIONREQUEST_H
#define QTAWS_EXTENDTRANSACTIONREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class ExtendTransactionRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT ExtendTransactionRequest : public LakeFormationRequest {

public:
    ExtendTransactionRequest(const ExtendTransactionRequest &other);
    ExtendTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExtendTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
