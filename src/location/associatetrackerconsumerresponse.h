// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRACKERCONSUMERRESPONSE_H
#define QTAWS_ASSOCIATETRACKERCONSUMERRESPONSE_H

#include "locationresponse.h"
#include "associatetrackerconsumerrequest.h"

namespace QtAws {
namespace Location {

class AssociateTrackerConsumerResponsePrivate;

class QTAWSLOCATION_EXPORT AssociateTrackerConsumerResponse : public LocationResponse {
    Q_OBJECT

public:
    AssociateTrackerConsumerResponse(const AssociateTrackerConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTrackerConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrackerConsumerResponse)
    Q_DISABLE_COPY(AssociateTrackerConsumerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
