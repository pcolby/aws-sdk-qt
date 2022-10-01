// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESETRESPONSE_H
#define QTAWS_CREATEPRESETRESPONSE_H

#include "elastictranscoderresponse.h"
#include "createpresetrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class CreatePresetResponsePrivate;

class QTAWSELASTICTRANSCODER_EXPORT CreatePresetResponse : public ElasticTranscoderResponse {
    Q_OBJECT

public:
    CreatePresetResponse(const CreatePresetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePresetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePresetResponse)
    Q_DISABLE_COPY(CreatePresetResponse)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
