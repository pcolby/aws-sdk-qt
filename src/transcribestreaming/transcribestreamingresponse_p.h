// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBESTREAMINGRESPONSE_P_H
#define QTAWS_TRANSCRIBESTREAMINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace TranscribeStreaming {

class TranscribeStreamingResponse;

class TranscribeStreamingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TranscribeStreamingResponsePrivate(TranscribeStreamingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TranscribeStreamingResponse)
    Q_DISABLE_COPY(TranscribeStreamingResponsePrivate)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
