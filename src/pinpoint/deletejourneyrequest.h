// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOURNEYREQUEST_H
#define QTAWS_DELETEJOURNEYREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteJourneyRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteJourneyRequest : public PinpointRequest {

public:
    DeleteJourneyRequest(const DeleteJourneyRequest &other);
    DeleteJourneyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJourneyRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
