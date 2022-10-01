// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SPLITSHARDRESPONSE_H
#define QTAWS_SPLITSHARDRESPONSE_H

#include "kinesisresponse.h"
#include "splitshardrequest.h"

namespace QtAws {
namespace Kinesis {

class SplitShardResponsePrivate;

class QTAWSKINESIS_EXPORT SplitShardResponse : public KinesisResponse {
    Q_OBJECT

public:
    SplitShardResponse(const SplitShardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SplitShardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SplitShardResponse)
    Q_DISABLE_COPY(SplitShardResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
