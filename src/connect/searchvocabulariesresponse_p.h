// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHVOCABULARIESRESPONSE_P_H
#define QTAWS_SEARCHVOCABULARIESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class SearchVocabulariesResponse;

class SearchVocabulariesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit SearchVocabulariesResponsePrivate(SearchVocabulariesResponse * const q);

    void parseSearchVocabulariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchVocabulariesResponse)
    Q_DISABLE_COPY(SearchVocabulariesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
