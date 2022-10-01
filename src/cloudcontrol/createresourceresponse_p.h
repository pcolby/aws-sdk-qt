// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCERESPONSE_P_H
#define QTAWS_CREATERESOURCERESPONSE_P_H

#include "cloudcontrolresponse_p.h"

namespace QtAws {
namespace CloudControl {

class CreateResourceResponse;

class CreateResourceResponsePrivate : public CloudControlResponsePrivate {

public:

    explicit CreateResourceResponsePrivate(CreateResourceResponse * const q);

    void parseCreateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceResponse)
    Q_DISABLE_COPY(CreateResourceResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
