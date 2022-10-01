// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELFTAGRESPONSE_P_H
#define QTAWS_DELETELFTAGRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class DeleteLFTagResponse;

class DeleteLFTagResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit DeleteLFTagResponsePrivate(DeleteLFTagResponse * const q);

    void parseDeleteLFTagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLFTagResponse)
    Q_DISABLE_COPY(DeleteLFTagResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
