// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSACTIONREQUEST_H
#define QTAWS_STARTTRANSACTIONREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartTransactionRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT StartTransactionRequest : public LakeFormationRequest {

public:
    StartTransactionRequest(const StartTransactionRequest &other);
    StartTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
