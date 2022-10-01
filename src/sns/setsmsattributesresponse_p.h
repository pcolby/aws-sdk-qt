// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSMSATTRIBUTESRESPONSE_P_H
#define QTAWS_SETSMSATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class SetSMSAttributesResponse;

class SetSMSAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit SetSMSAttributesResponsePrivate(SetSMSAttributesResponse * const q);

    void parseSetSMSAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetSMSAttributesResponse)
    Q_DISABLE_COPY(SetSMSAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
