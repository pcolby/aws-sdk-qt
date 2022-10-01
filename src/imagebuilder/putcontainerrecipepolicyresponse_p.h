// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERRECIPEPOLICYRESPONSE_P_H
#define QTAWS_PUTCONTAINERRECIPEPOLICYRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class PutContainerRecipePolicyResponse;

class PutContainerRecipePolicyResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit PutContainerRecipePolicyResponsePrivate(PutContainerRecipePolicyResponse * const q);

    void parsePutContainerRecipePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutContainerRecipePolicyResponse)
    Q_DISABLE_COPY(PutContainerRecipePolicyResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
