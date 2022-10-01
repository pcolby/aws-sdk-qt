// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPPOLICYRESPONSE_P_H
#define QTAWS_LOOKUPPOLICYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class LookupPolicyResponse;

class LookupPolicyResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit LookupPolicyResponsePrivate(LookupPolicyResponse * const q);

    void parseLookupPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookupPolicyResponse)
    Q_DISABLE_COPY(LookupPolicyResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
