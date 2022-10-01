// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSTREAMCONSUMERRESPONSE_H
#define QTAWS_DEREGISTERSTREAMCONSUMERRESPONSE_H

#include "kinesisresponse.h"
#include "deregisterstreamconsumerrequest.h"

namespace QtAws {
namespace Kinesis {

class DeregisterStreamConsumerResponsePrivate;

class QTAWSKINESIS_EXPORT DeregisterStreamConsumerResponse : public KinesisResponse {
    Q_OBJECT

public:
    DeregisterStreamConsumerResponse(const DeregisterStreamConsumerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterStreamConsumerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterStreamConsumerResponse)
    Q_DISABLE_COPY(DeregisterStreamConsumerResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
