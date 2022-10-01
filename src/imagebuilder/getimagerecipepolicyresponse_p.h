// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPEPOLICYRESPONSE_P_H
#define QTAWS_GETIMAGERECIPEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipePolicyResponse;

class GetImageRecipePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetImageRecipePolicyResponsePrivate(GetImageRecipePolicyResponse * const q);

    void parseGetImageRecipePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImageRecipePolicyResponse)
    Q_DISABLE_COPY(GetImageRecipePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
