// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLFTAGSTORESOURCERESPONSE_P_H
#define QTAWS_ADDLFTAGSTORESOURCERESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class AddLFTagsToResourceResponse;

class AddLFTagsToResourceResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit AddLFTagsToResourceResponsePrivate(AddLFTagsToResourceResponse * const q);

    void parseAddLFTagsToResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddLFTagsToResourceResponse)
    Q_DISABLE_COPY(AddLFTagsToResourceResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
