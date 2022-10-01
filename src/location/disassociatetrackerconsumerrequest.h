// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRACKERCONSUMERREQUEST_H
#define QTAWS_DISASSOCIATETRACKERCONSUMERREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DisassociateTrackerConsumerRequestPrivate;

class QTAWSLOCATION_EXPORT DisassociateTrackerConsumerRequest : public LocationRequest {

public:
    DisassociateTrackerConsumerRequest(const DisassociateTrackerConsumerRequest &other);
    DisassociateTrackerConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrackerConsumerRequest)

};

} // namespace Location
} // namespace QtAws

#endif
