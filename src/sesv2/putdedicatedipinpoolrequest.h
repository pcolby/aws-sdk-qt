// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEDICATEDIPINPOOLREQUEST_H
#define QTAWS_PUTDEDICATEDIPINPOOLREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutDedicatedIpInPoolRequestPrivate;

class QTAWSSESV2_EXPORT PutDedicatedIpInPoolRequest : public SESv2Request {

public:
    PutDedicatedIpInPoolRequest(const PutDedicatedIpInPoolRequest &other);
    PutDedicatedIpInPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDedicatedIpInPoolRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
