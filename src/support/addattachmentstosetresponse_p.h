// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTACHMENTSTOSETRESPONSE_P_H
#define QTAWS_ADDATTACHMENTSTOSETRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class AddAttachmentsToSetResponse;

class AddAttachmentsToSetResponsePrivate : public SupportResponsePrivate {

public:

    explicit AddAttachmentsToSetResponsePrivate(AddAttachmentsToSetResponse * const q);

    void parseAddAttachmentsToSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddAttachmentsToSetResponse)
    Q_DISABLE_COPY(AddAttachmentsToSetResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
