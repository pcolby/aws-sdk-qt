// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATASYNCRESPONSE_P_H
#define QTAWS_DATASYNCRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DataSync {

class DataSyncResponse;

class DataSyncResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DataSyncResponsePrivate(DataSyncResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DataSyncResponse)
    Q_DISABLE_COPY(DataSyncResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
