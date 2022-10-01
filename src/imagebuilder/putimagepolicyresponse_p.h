// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEPOLICYRESPONSE_P_H
#define QTAWS_PUTIMAGEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class PutImagePolicyResponse;

class PutImagePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit PutImagePolicyResponsePrivate(PutImagePolicyResponse * const q);

    void parsePutImagePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutImagePolicyResponse)
    Q_DISABLE_COPY(PutImagePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
