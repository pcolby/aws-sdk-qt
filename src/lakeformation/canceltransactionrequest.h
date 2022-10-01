// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTRANSACTIONREQUEST_H
#define QTAWS_CANCELTRANSACTIONREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class CancelTransactionRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT CancelTransactionRequest : public LakeFormationRequest {

public:
    CancelTransactionRequest(const CancelTransactionRequest &other);
    CancelTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
