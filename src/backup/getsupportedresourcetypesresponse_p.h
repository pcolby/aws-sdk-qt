// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUPPORTEDRESOURCETYPESRESPONSE_P_H
#define QTAWS_GETSUPPORTEDRESOURCETYPESRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class GetSupportedResourceTypesResponse;

class GetSupportedResourceTypesResponsePrivate : public BackupResponsePrivate {

public:

    explicit GetSupportedResourceTypesResponsePrivate(GetSupportedResourceTypesResponse * const q);

    void parseGetSupportedResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSupportedResourceTypesResponse)
    Q_DISABLE_COPY(GetSupportedResourceTypesResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
