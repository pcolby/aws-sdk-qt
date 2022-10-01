// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERECIPEPOLICYRESPONSE_P_H
#define QTAWS_PUTIMAGERECIPEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class PutImageRecipePolicyResponse;

class PutImageRecipePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit PutImageRecipePolicyResponsePrivate(PutImageRecipePolicyResponse * const q);

    void parsePutImageRecipePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutImageRecipePolicyResponse)
    Q_DISABLE_COPY(PutImageRecipePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
