// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSATTRIBUTESRESPONSE_P_H
#define QTAWS_GETSMSATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetSMSAttributesResponse;

class GetSMSAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetSMSAttributesResponsePrivate(GetSMSAttributesResponse * const q);

    void parseGetSMSAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSMSAttributesResponse)
    Q_DISABLE_COPY(GetSMSAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
