// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDATAIDENTIFIERRESPONSE_P_H
#define QTAWS_DELETECUSTOMDATAIDENTIFIERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DeleteCustomDataIdentifierResponse;

class DeleteCustomDataIdentifierResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DeleteCustomDataIdentifierResponsePrivate(DeleteCustomDataIdentifierResponse * const q);

    void parseDeleteCustomDataIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomDataIdentifierResponse)
    Q_DISABLE_COPY(DeleteCustomDataIdentifierResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
