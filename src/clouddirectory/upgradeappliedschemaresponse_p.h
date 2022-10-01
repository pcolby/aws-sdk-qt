// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEAPPLIEDSCHEMARESPONSE_P_H
#define QTAWS_UPGRADEAPPLIEDSCHEMARESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradeAppliedSchemaResponse;

class UpgradeAppliedSchemaResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpgradeAppliedSchemaResponsePrivate(UpgradeAppliedSchemaResponse * const q);

    void parseUpgradeAppliedSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpgradeAppliedSchemaResponse)
    Q_DISABLE_COPY(UpgradeAppliedSchemaResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
