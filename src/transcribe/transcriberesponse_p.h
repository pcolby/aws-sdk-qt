// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBERESPONSE_P_H
#define QTAWS_TRANSCRIBERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Transcribe {

class TranscribeResponse;

class TranscribeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TranscribeResponsePrivate(TranscribeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TranscribeResponse)
    Q_DISABLE_COPY(TranscribeResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
