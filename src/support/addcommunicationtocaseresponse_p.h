// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCOMMUNICATIONTOCASERESPONSE_P_H
#define QTAWS_ADDCOMMUNICATIONTOCASERESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class AddCommunicationToCaseResponse;

class AddCommunicationToCaseResponsePrivate : public SupportResponsePrivate {

public:

    explicit AddCommunicationToCaseResponsePrivate(AddCommunicationToCaseResponse * const q);

    void parseAddCommunicationToCaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddCommunicationToCaseResponse)
    Q_DISABLE_COPY(AddCommunicationToCaseResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
