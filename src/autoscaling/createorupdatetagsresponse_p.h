// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORUPDATETAGSRESPONSE_P_H
#define QTAWS_CREATEORUPDATETAGSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class CreateOrUpdateTagsResponse;

class CreateOrUpdateTagsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit CreateOrUpdateTagsResponsePrivate(CreateOrUpdateTagsResponse * const q);

    void parseCreateOrUpdateTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOrUpdateTagsResponse)
    Q_DISABLE_COPY(CreateOrUpdateTagsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
