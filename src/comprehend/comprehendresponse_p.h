// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDRESPONSE_P_H
#define QTAWS_COMPREHENDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ComprehendResponse;

class ComprehendResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ComprehendResponsePrivate(ComprehendResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ComprehendResponse)
    Q_DISABLE_COPY(ComprehendResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
