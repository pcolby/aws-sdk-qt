// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEFAULTVOCABULARYRESPONSE_P_H
#define QTAWS_ASSOCIATEDEFAULTVOCABULARYRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateDefaultVocabularyResponse;

class AssociateDefaultVocabularyResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateDefaultVocabularyResponsePrivate(AssociateDefaultVocabularyResponse * const q);

    void parseAssociateDefaultVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDefaultVocabularyResponse)
    Q_DISABLE_COPY(AssociateDefaultVocabularyResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
