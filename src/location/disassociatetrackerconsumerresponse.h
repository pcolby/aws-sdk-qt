// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRACKERCONSUMERRESPONSE_H
#define QTAWS_DISASSOCIATETRACKERCONSUMERRESPONSE_H

#include "locationresponse.h"
#include "disassociatetrackerconsumerrequest.h"

namespace QtAws {
namespace Location {

class DisassociateTrackerConsumerResponsePrivate;

class QTAWSLOCATION_EXPORT DisassociateTrackerConsumerResponse : public LocationResponse {
    Q_OBJECT

public:
    DisassociateTrackerConsumerResponse(const DisassociateTrackerConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateTrackerConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrackerConsumerResponse)
    Q_DISABLE_COPY(DisassociateTrackerConsumerResponse)

};

} // namespace Location
} // namespace QtAws

#endif
