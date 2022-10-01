// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPTOREGIONRESPONSE_P_H
#define QTAWS_COPYBACKUPTOREGIONRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class CopyBackupToRegionResponse;

class CopyBackupToRegionResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit CopyBackupToRegionResponsePrivate(CopyBackupToRegionResponse * const q);

    void parseCopyBackupToRegionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyBackupToRegionResponse)
    Q_DISABLE_COPY(CopyBackupToRegionResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
