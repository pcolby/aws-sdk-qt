// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MTURKRESPONSE_P_H
#define QTAWS_MTURKRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MTurk {

class MTurkResponse;

class MTurkResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MTurkResponsePrivate(MTurkResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MTurkResponse)
    Q_DISABLE_COPY(MTurkResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
