// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTDATADELIVERYREQUEST_H
#define QTAWS_UPDATEPROJECTDATADELIVERYREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class UpdateProjectDataDeliveryRequestPrivate;

class QTAWSEVIDENTLY_EXPORT UpdateProjectDataDeliveryRequest : public EvidentlyRequest {

public:
    UpdateProjectDataDeliveryRequest(const UpdateProjectDataDeliveryRequest &other);
    UpdateProjectDataDeliveryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectDataDeliveryRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
