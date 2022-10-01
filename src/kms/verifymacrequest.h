// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYMACREQUEST_H
#define QTAWS_VERIFYMACREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class VerifyMacRequestPrivate;

class QTAWSKMS_EXPORT VerifyMacRequest : public KmsRequest {

public:
    VerifyMacRequest(const VerifyMacRequest &other);
    VerifyMacRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyMacRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
