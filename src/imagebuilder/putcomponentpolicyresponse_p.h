// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPONENTPOLICYRESPONSE_P_H
#define QTAWS_PUTCOMPONENTPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class PutComponentPolicyResponse;

class PutComponentPolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit PutComponentPolicyResponsePrivate(PutComponentPolicyResponse * const q);

    void parsePutComponentPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutComponentPolicyResponse)
    Q_DISABLE_COPY(PutComponentPolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
