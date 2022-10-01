// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetReputationOptionsRequestPrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetReputationOptionsRequest : public SESv2Request {

public:
    PutConfigurationSetReputationOptionsRequest(const PutConfigurationSetReputationOptionsRequest &other);
    PutConfigurationSetReputationOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetReputationOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
