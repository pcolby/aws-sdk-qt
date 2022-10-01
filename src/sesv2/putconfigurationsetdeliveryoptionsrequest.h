// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetDeliveryOptionsRequestPrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetDeliveryOptionsRequest : public SESv2Request {

public:
    PutConfigurationSetDeliveryOptionsRequest(const PutConfigurationSetDeliveryOptionsRequest &other);
    PutConfigurationSetDeliveryOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetDeliveryOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
