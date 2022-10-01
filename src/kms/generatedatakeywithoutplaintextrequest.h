// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_H
#define QTAWS_GENERATEDATAKEYWITHOUTPLAINTEXTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyWithoutPlaintextRequestPrivate;

class QTAWSKMS_EXPORT GenerateDataKeyWithoutPlaintextRequest : public KmsRequest {

public:
    GenerateDataKeyWithoutPlaintextRequest(const GenerateDataKeyWithoutPlaintextRequest &other);
    GenerateDataKeyWithoutPlaintextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyWithoutPlaintextRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
