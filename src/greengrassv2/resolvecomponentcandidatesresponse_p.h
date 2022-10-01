// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECOMPONENTCANDIDATESRESPONSE_P_H
#define QTAWS_RESOLVECOMPONENTCANDIDATESRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ResolveComponentCandidatesResponse;

class ResolveComponentCandidatesResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ResolveComponentCandidatesResponsePrivate(ResolveComponentCandidatesResponse * const q);

    void parseResolveComponentCandidatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveComponentCandidatesResponse)
    Q_DISABLE_COPY(ResolveComponentCandidatesResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
