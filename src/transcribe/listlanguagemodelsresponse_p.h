// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLANGUAGEMODELSRESPONSE_P_H
#define QTAWS_LISTLANGUAGEMODELSRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListLanguageModelsResponse;

class ListLanguageModelsResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListLanguageModelsResponsePrivate(ListLanguageModelsResponse * const q);

    void parseListLanguageModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLanguageModelsResponse)
    Q_DISABLE_COPY(ListLanguageModelsResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
