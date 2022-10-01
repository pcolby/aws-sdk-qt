// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRREQUEST_H
#define QTAWS_CREATEKEYPAIRREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateKeyPairRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT CreateKeyPairRequest : public LightsailRequest {

public:
    CreateKeyPairRequest(const CreateKeyPairRequest &other);
    CreateKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
