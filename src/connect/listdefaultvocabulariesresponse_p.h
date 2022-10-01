// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEFAULTVOCABULARIESRESPONSE_P_H
#define QTAWS_LISTDEFAULTVOCABULARIESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListDefaultVocabulariesResponse;

class ListDefaultVocabulariesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListDefaultVocabulariesResponsePrivate(ListDefaultVocabulariesResponse * const q);

    void parseListDefaultVocabulariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDefaultVocabulariesResponse)
    Q_DISABLE_COPY(ListDefaultVocabulariesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
