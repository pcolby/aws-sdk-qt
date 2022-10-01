// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGINSTANCEPROFILERESPONSE_P_H
#define QTAWS_TAGINSTANCEPROFILERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagInstanceProfileResponse;

class TagInstanceProfileResponsePrivate : public IamResponsePrivate {

public:

    explicit TagInstanceProfileResponsePrivate(TagInstanceProfileResponse * const q);

    void parseTagInstanceProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagInstanceProfileResponse)
    Q_DISABLE_COPY(TagInstanceProfileResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
