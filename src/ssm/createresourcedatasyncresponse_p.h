// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDATASYNCRESPONSE_P_H
#define QTAWS_CREATERESOURCEDATASYNCRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateResourceDataSyncResponse;

class CreateResourceDataSyncResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateResourceDataSyncResponsePrivate(CreateResourceDataSyncResponse * const q);

    void parseCreateResourceDataSyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceDataSyncResponse)
    Q_DISABLE_COPY(CreateResourceDataSyncResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
