// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYREQUEST_H
#define QTAWS_GENERATEDATAKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyRequestPrivate;

class QTAWSKMS_EXPORT GenerateDataKeyRequest : public KmsRequest {

public:
    GenerateDataKeyRequest(const GenerateDataKeyRequest &other);
    GenerateDataKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateDataKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
