// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKEYPAIRREQUEST_H
#define QTAWS_GETKEYPAIRREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetKeyPairRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetKeyPairRequest : public LightsailRequest {

public:
    GetKeyPairRequest(const GetKeyPairRequest &other);
    GetKeyPairRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
