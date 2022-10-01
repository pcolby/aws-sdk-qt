// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMDATAIDENTIFIERRESPONSE_P_H
#define QTAWS_GETCUSTOMDATAIDENTIFIERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetCustomDataIdentifierResponse;

class GetCustomDataIdentifierResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetCustomDataIdentifierResponsePrivate(GetCustomDataIdentifierResponse * const q);

    void parseGetCustomDataIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCustomDataIdentifierResponse)
    Q_DISABLE_COPY(GetCustomDataIdentifierResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
