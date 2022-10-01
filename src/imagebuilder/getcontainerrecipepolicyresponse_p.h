// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEPOLICYRESPONSE_P_H
#define QTAWS_GETCONTAINERRECIPEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipePolicyResponse;

class GetContainerRecipePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetContainerRecipePolicyResponsePrivate(GetContainerRecipePolicyResponse * const q);

    void parseGetContainerRecipePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerRecipePolicyResponse)
    Q_DISABLE_COPY(GetContainerRecipePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
