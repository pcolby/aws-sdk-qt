// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMPROCESSORRESPONSE_H
#define QTAWS_STOPSTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "stopstreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class StopStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT StopStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StopStreamProcessorResponse(const StopStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamProcessorResponse)
    Q_DISABLE_COPY(StopStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
