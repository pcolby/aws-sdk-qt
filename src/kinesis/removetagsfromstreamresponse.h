// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMSTREAMRESPONSE_H
#define QTAWS_REMOVETAGSFROMSTREAMRESPONSE_H

#include "kinesisresponse.h"
#include "removetagsfromstreamrequest.h"

namespace QtAws {
namespace Kinesis {

class RemoveTagsFromStreamResponsePrivate;

class QTAWSKINESIS_EXPORT RemoveTagsFromStreamResponse : public KinesisResponse {
    Q_OBJECT

public:
    RemoveTagsFromStreamResponse(const RemoveTagsFromStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsFromStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromStreamResponse)
    Q_DISABLE_COPY(RemoveTagsFromStreamResponse)

};

} // namespace Kinesis
} // namespace QtAws

#endif
