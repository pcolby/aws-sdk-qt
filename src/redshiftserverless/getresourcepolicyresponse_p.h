// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICYRESPONSE_P_H
#define QTAWS_GETRESOURCEPOLICYRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetResourcePolicyResponse;

class GetResourcePolicyResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetResourcePolicyResponsePrivate(GetResourcePolicyResponse * const q);

    void parseGetResourcePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourcePolicyResponse)
    Q_DISABLE_COPY(GetResourcePolicyResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
