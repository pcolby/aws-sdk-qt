// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYRESPONSE_P_H
#define QTAWS_DELETEVOCABULARYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteVocabularyResponse;

class DeleteVocabularyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteVocabularyResponsePrivate(DeleteVocabularyResponse * const q);

    void parseDeleteVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyResponse)
    Q_DISABLE_COPY(DeleteVocabularyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
