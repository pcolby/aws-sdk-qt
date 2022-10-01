// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRREQUEST_H
#define QTAWS_GENERATEDATAKEYPAIRREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairRequestPrivate;

class QTAWSKMS_EXPORT GenerateDataKeyPairRequest : public KmsRequest {

public:
    GenerateDataKeyPairRequest(const GenerateDataKeyPairRequest &other);
    GenerateDataKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyPairRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
