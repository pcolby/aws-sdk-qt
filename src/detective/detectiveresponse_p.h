// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTIVERESPONSE_P_H
#define QTAWS_DETECTIVERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Detective {

class DetectiveResponse;

class DetectiveResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DetectiveResponsePrivate(DetectiveResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectiveResponse)
    Q_DISABLE_COPY(DetectiveResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
