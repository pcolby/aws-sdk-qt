// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONS3RESPONSE_P_H
#define QTAWS_CREATELOCATIONS3RESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationS3Response;

class CreateLocationS3ResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationS3ResponsePrivate(CreateLocationS3Response * const q);

    void parseCreateLocationS3Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationS3Response)
    Q_DISABLE_COPY(CreateLocationS3ResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
