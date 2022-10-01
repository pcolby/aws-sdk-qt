// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLESTORAGEOPTIMIZERRESPONSE_P_H
#define QTAWS_UPDATETABLESTORAGEOPTIMIZERRESPONSE_P_H

#include "lakeformationresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class UpdateTableStorageOptimizerResponse;

class UpdateTableStorageOptimizerResponsePrivate : public LakeFormationResponsePrivate {

public:

    explicit UpdateTableStorageOptimizerResponsePrivate(UpdateTableStorageOptimizerResponse * const q);

    void parseUpdateTableStorageOptimizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTableStorageOptimizerResponse)
    Q_DISABLE_COPY(UpdateTableStorageOptimizerResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
