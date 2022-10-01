// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOSHARDREQUEST_H
#define QTAWS_SUBSCRIBETOSHARDREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class SubscribeToShardRequestPrivate;

class QTAWSKINESIS_EXPORT SubscribeToShardRequest : public KinesisRequest {

public:
    SubscribeToShardRequest(const SubscribeToShardRequest &other);
    SubscribeToShardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToShardRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
