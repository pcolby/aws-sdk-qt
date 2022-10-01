// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HONEYCODERESPONSE_P_H
#define QTAWS_HONEYCODERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Honeycode {

class HoneycodeResponse;

class HoneycodeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit HoneycodeResponsePrivate(HoneycodeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(HoneycodeResponse)
    Q_DISABLE_COPY(HoneycodeResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
