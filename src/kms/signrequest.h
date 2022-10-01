// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNREQUEST_H
#define QTAWS_SIGNREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class SignRequestPrivate;

class QTAWSKMS_EXPORT SignRequest : public KmsRequest {

public:
    SignRequest(const SignRequest &other);
    SignRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SignRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
