// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMPROCESSORRESPONSE_H
#define QTAWS_UPDATESTREAMPROCESSORRESPONSE_H

#include "rekognitionresponse.h"
#include "updatestreamprocessorrequest.h"

namespace QtAws {
namespace Rekognition {

class UpdateStreamProcessorResponsePrivate;

class QTAWSREKOGNITION_EXPORT UpdateStreamProcessorResponse : public RekognitionResponse {
    Q_OBJECT

public:
    UpdateStreamProcessorResponse(const UpdateStreamProcessorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStreamProcessorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamProcessorResponse)
    Q_DISABLE_COPY(UpdateStreamProcessorResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
