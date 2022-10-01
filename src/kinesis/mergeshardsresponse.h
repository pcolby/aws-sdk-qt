// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGESHARDSRESPONSE_H
#define QTAWS_MERGESHARDSRESPONSE_H

#include "kinesisresponse.h"
#include "mergeshardsrequest.h"

namespace QtAws {
namespace Kinesis {

class MergeShardsResponsePrivate;

class QTAWSKINESIS_EXPORT MergeShardsResponse : public KinesisResponse {
    Q_OBJECT

public:
    MergeShardsResponse(const MergeShardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MergeShardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeShardsResponse)
    Q_DISABLE_COPY(MergeShardsResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
