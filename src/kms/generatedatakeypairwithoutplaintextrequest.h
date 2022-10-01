// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTREQUEST_H
#define QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairWithoutPlaintextRequestPrivate;

class QTAWSKMS_EXPORT GenerateDataKeyPairWithoutPlaintextRequest : public KmsRequest {

public:
    GenerateDataKeyPairWithoutPlaintextRequest(const GenerateDataKeyPairWithoutPlaintextRequest &other);
    GenerateDataKeyPairWithoutPlaintextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyPairWithoutPlaintextRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
