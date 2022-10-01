// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYBACKENDRESPONSE_P_H
#define QTAWS_AMPLIFYBACKENDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendResponse;

class AmplifyBackendResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AmplifyBackendResponsePrivate(AmplifyBackendResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AmplifyBackendResponse)
    Q_DISABLE_COPY(AmplifyBackendResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
