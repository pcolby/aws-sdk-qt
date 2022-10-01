// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGUSERRESPONSE_P_H
#define QTAWS_TAGUSERRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagUserResponse;

class TagUserResponsePrivate : public IamResponsePrivate {

public:

    explicit TagUserResponsePrivate(TagUserResponse * const q);

    void parseTagUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagUserResponse)
    Q_DISABLE_COPY(TagUserResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
