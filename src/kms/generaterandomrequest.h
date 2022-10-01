// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATERANDOMREQUEST_H
#define QTAWS_GENERATERANDOMREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GenerateRandomRequestPrivate;

class QTAWSKMS_EXPORT GenerateRandomRequest : public KmsRequest {

public:
    GenerateRandomRequest(const GenerateRandomRequest &other);
    GenerateRandomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateRandomRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
