// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMPROCESSORRESPONSE_H
#define QTAWS_CREATESTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "createstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT CreateStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CreateStreamProcessorResponse(const CreateStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamProcessorResponse)
    Q_DISABLE_COPY(CreateStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
