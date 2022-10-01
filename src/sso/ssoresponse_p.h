// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSORESPONSE_P_H
#define QTAWS_SSORESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sso {

class SsoResponse;

class SsoResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsoResponsePrivate(SsoResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsoResponse)
    Q_DISABLE_COPY(SsoResponsePrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
