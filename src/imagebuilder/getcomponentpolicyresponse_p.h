// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTPOLICYRESPONSE_P_H
#define QTAWS_GETCOMPONENTPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetComponentPolicyResponse;

class GetComponentPolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetComponentPolicyResponsePrivate(GetComponentPolicyResponse * const q);

    void parseGetComponentPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComponentPolicyResponse)
    Q_DISABLE_COPY(GetComponentPolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
