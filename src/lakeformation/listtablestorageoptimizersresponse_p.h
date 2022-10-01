// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESTORAGEOPTIMIZERSRESPONSE_P_H
#define QTAWS_LISTTABLESTORAGEOPTIMIZERSRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class ListTableStorageOptimizersResponse;

class ListTableStorageOptimizersResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit ListTableStorageOptimizersResponsePrivate(ListTableStorageOptimizersResponse * const q);

    void parseListTableStorageOptimizersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTableStorageOptimizersResponse)
    Q_DISABLE_COPY(ListTableStorageOptimizersResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
