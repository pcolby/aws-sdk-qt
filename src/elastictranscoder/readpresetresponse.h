// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_READPRESETRESPONSE_H
#define QTAWS_READPRESETRESPONSE_H

#include "elastictranscoderresponse.h"
#include "readpresetrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ReadPresetResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT ReadPresetResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    ReadPresetResponse(const ReadPresetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReadPresetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReadPresetResponse)
    Q_DISABLE_COPY(ReadPresetResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
