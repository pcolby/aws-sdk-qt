// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCERESPONSE_P_H
#define QTAWS_GETRESOURCERESPONSE_P_H

#include "cloudcontrolresponse_p.h"

namespace QtAws {
namespace CloudControl {

class GetResourceResponse;

class GetResourceResponsePrivate : public CloudControlResponsePrivate {

public:

    explicit GetResourceResponsePrivate(GetResourceResponse * const q);

    void parseGetResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceResponse)
    Q_DISABLE_COPY(GetResourceResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
