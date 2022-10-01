// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGRESOURCERESPONSE_P_H
#define QTAWS_UNTAGRESOURCERESPONSE_P_H

#include "chimesdkmediapipelinesresponse_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class UntagResourceResponse;

class UntagResourceResponsePrivate : public ChimeSdkMediaPipelinesResponsePrivate {

public:

    explicit UntagResourceResponsePrivate(UntagResourceResponse * const q);

    void parseUntagResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagResourceResponse)
    Q_DISABLE_COPY(UntagResourceResponsePrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
