// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTSONCANCELRESPONSE_P_H
#define QTAWS_DELETEOBJECTSONCANCELRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class DeleteObjectsOnCancelResponse;

class DeleteObjectsOnCancelResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit DeleteObjectsOnCancelResponsePrivate(DeleteObjectsOnCancelResponse * const q);

    void parseDeleteObjectsOnCancelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteObjectsOnCancelResponse)
    Q_DISABLE_COPY(DeleteObjectsOnCancelResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
