// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCHECKLAYERAVAILABILITYREQUEST_H
#define QTAWS_BATCHCHECKLAYERAVAILABILITYREQUEST_H

#include "ecrpublicrequest.h"

namespace QtAws {
namespace EcrPublic {

class BatchCheckLayerAvailabilityRequestPrivate;

class QTAWSECRPUBLIC_EXPORT BatchCheckLayerAvailabilityRequest : public EcrPublicRequest {

public:
    BatchCheckLayerAvailabilityRequest(const BatchCheckLayerAvailabilityRequest &other);
    BatchCheckLayerAvailabilityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCheckLayerAvailabilityRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
