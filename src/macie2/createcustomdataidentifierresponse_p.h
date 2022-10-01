// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDATAIDENTIFIERRESPONSE_P_H
#define QTAWS_CREATECUSTOMDATAIDENTIFIERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateCustomDataIdentifierResponse;

class CreateCustomDataIdentifierResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateCustomDataIdentifierResponsePrivate(CreateCustomDataIdentifierResponse * const q);

    void parseCreateCustomDataIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomDataIdentifierResponse)
    Q_DISABLE_COPY(CreateCustomDataIdentifierResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
