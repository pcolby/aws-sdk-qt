// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9RESPONSE_P_H
#define QTAWS_CLOUD9RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Cloud9 {

class Cloud9Response;

class Cloud9ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Cloud9ResponsePrivate(Cloud9Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Cloud9Response)
    Q_DISABLE_COPY(Cloud9ResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
