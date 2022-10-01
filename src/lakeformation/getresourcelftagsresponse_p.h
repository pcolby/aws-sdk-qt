// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELFTAGSRESPONSE_P_H
#define QTAWS_GETRESOURCELFTAGSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class GetResourceLFTagsResponse;

class GetResourceLFTagsResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit GetResourceLFTagsResponsePrivate(GetResourceLFTagsResponse * const q);

    void parseGetResourceLFTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceLFTagsResponse)
    Q_DISABLE_COPY(GetResourceLFTagsResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
