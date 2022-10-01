// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRESOURCERESPONSE_P_H
#define QTAWS_DEREGISTERRESOURCERESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class DeregisterResourceResponse;

class DeregisterResourceResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit DeregisterResourceResponsePrivate(DeregisterResourceResponse * const q);

    void parseDeregisterResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterResourceResponse)
    Q_DISABLE_COPY(DeregisterResourceResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
