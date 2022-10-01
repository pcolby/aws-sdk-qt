// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPGRADEPUBLISHEDSCHEMARESPONSE_P_H
#define QTAWS_UPGRADEPUBLISHEDSCHEMARESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpgradePublishedSchemaResponse;

class UpgradePublishedSchemaResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpgradePublishedSchemaResponsePrivate(UpgradePublishedSchemaResponse * const q);

    void parseUpgradePublishedSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpgradePublishedSchemaResponse)
    Q_DISABLE_COPY(UpgradePublishedSchemaResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
