// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESRESPONSE_P_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesResponse;

class GetSensitiveDataOccurrencesResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetSensitiveDataOccurrencesResponsePrivate(GetSensitiveDataOccurrencesResponse * const q);

    void parseGetSensitiveDataOccurrencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSensitiveDataOccurrencesResponse)
    Q_DISABLE_COPY(GetSensitiveDataOccurrencesResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
