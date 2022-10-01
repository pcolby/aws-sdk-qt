// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYRESPONSE_P_H
#define QTAWS_AMPLIFYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Amplify {

class AmplifyResponse;

class AmplifyResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AmplifyResponsePrivate(AmplifyResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AmplifyResponse)
    Q_DISABLE_COPY(AmplifyResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
