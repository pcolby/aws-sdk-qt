// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUPPRESSEDDESTINATIONRESPONSE_P_H
#define QTAWS_DELETESUPPRESSEDDESTINATIONRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteSuppressedDestinationResponse;

class DeleteSuppressedDestinationResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteSuppressedDestinationResponsePrivate(DeleteSuppressedDestinationResponse * const q);

    void parseDeleteSuppressedDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSuppressedDestinationResponse)
    Q_DISABLE_COPY(DeleteSuppressedDestinationResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
