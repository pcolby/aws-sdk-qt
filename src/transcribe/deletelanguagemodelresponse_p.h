// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELANGUAGEMODELRESPONSE_P_H
#define QTAWS_DELETELANGUAGEMODELRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteLanguageModelResponse;

class DeleteLanguageModelResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteLanguageModelResponsePrivate(DeleteLanguageModelResponse * const q);

    void parseDeleteLanguageModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLanguageModelResponse)
    Q_DISABLE_COPY(DeleteLanguageModelResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
