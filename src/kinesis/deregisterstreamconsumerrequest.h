// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSTREAMCONSUMERREQUEST_H
#define QTAWS_DEREGISTERSTREAMCONSUMERREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DeregisterStreamConsumerRequestPrivate;

class QTAWSKINESIS_EXPORT DeregisterStreamConsumerRequest : public KinesisRequest {

public:
    DeregisterStreamConsumerRequest(const DeregisterStreamConsumerRequest &other);
    DeregisterStreamConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterStreamConsumerRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
