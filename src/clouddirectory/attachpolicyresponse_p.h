// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYRESPONSE_P_H
#define QTAWS_ATTACHPOLICYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class AttachPolicyResponse;

class AttachPolicyResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit AttachPolicyResponsePrivate(AttachPolicyResponse * const q);

    void parseAttachPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachPolicyResponse)
    Q_DISABLE_COPY(AttachPolicyResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
