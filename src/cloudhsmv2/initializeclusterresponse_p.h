// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZECLUSTERRESPONSE_P_H
#define QTAWS_INITIALIZECLUSTERRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class InitializeClusterResponse;

class InitializeClusterResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit InitializeClusterResponsePrivate(InitializeClusterResponse * const q);

    void parseInitializeClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitializeClusterResponse)
    Q_DISABLE_COPY(InitializeClusterResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
