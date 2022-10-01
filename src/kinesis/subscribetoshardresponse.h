// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETOSHARDRESPONSE_H
#define QTAWS_SUBSCRIBETOSHARDRESPONSE_H

#include "kinesisresponse.h"
#include "subscribetoshardrequest.h"

namespace QtAws {
namespace Kinesis {

class SubscribeToShardResponsePrivate;

class QTAWSKINESIS_EXPORT SubscribeToShardResponse : public KinesisResponse {
    Q_OBJECT

public:
    SubscribeToShardResponse(const SubscribeToShardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubscribeToShardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeToShardResponse)
    Q_DISABLE_COPY(SubscribeToShardResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
