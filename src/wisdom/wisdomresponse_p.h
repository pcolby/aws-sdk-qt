// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WISDOMRESPONSE_P_H
#define QTAWS_WISDOMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Wisdom {

class WisdomResponse;

class WisdomResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit WisdomResponsePrivate(WisdomResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WisdomResponse)
    Q_DISABLE_COPY(WisdomResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
