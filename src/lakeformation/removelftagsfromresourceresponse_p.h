// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELFTAGSFROMRESOURCERESPONSE_P_H
#define QTAWS_REMOVELFTAGSFROMRESOURCERESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class RemoveLFTagsFromResourceResponse;

class RemoveLFTagsFromResourceResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit RemoveLFTagsFromResourceResponsePrivate(RemoveLFTagsFromResourceResponse * const q);

    void parseRemoveLFTagsFromResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveLFTagsFromResourceResponse)
    Q_DISABLE_COPY(RemoveLFTagsFromResourceResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
