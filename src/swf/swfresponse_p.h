// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SWFRESPONSE_P_H
#define QTAWS_SWFRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Swf {

class SwfResponse;

class SwfResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SwfResponsePrivate(SwfResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SwfResponse)
    Q_DISABLE_COPY(SwfResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
