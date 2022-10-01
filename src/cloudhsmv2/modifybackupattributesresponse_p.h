// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYBACKUPATTRIBUTESRESPONSE_P_H
#define QTAWS_MODIFYBACKUPATTRIBUTESRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyBackupAttributesResponse;

class ModifyBackupAttributesResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit ModifyBackupAttributesResponsePrivate(ModifyBackupAttributesResponse * const q);

    void parseModifyBackupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyBackupAttributesResponse)
    Q_DISABLE_COPY(ModifyBackupAttributesResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
