// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRANTREQUEST_H
#define QTAWS_CREATEGRANTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class CreateGrantRequestPrivate;

class QTAWSKMS_EXPORT CreateGrantRequest : public KmsRequest {

public:
    CreateGrantRequest(const CreateGrantRequest &other);
    CreateGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
