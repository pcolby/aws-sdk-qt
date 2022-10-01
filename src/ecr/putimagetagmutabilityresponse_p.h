// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGETAGMUTABILITYRESPONSE_P_H
#define QTAWS_PUTIMAGETAGMUTABILITYRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutImageTagMutabilityResponse;

class PutImageTagMutabilityResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutImageTagMutabilityResponsePrivate(PutImageTagMutabilityResponse * const q);

    void parsePutImageTagMutabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutImageTagMutabilityResponse)
    Q_DISABLE_COPY(PutImageTagMutabilityResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
