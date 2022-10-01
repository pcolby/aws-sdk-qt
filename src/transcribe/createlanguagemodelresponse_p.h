// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELANGUAGEMODELRESPONSE_P_H
#define QTAWS_CREATELANGUAGEMODELRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class CreateLanguageModelResponse;

class CreateLanguageModelResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit CreateLanguageModelResponsePrivate(CreateLanguageModelResponse * const q);

    void parseCreateLanguageModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLanguageModelResponse)
    Q_DISABLE_COPY(CreateLanguageModelResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
