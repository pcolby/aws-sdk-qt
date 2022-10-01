// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPOLICYRESPONSE_P_H
#define QTAWS_GETIMAGEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePolicyResponse;

class GetImagePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetImagePolicyResponsePrivate(GetImagePolicyResponse * const q);

    void parseGetImagePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImagePolicyResponse)
    Q_DISABLE_COPY(GetImagePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
