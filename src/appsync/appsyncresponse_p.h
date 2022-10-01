// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSYNCRESPONSE_P_H
#define QTAWS_APPSYNCRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AppSync {

class AppSyncResponse;

class AppSyncResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AppSyncResponsePrivate(AppSyncResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AppSyncResponse)
    Q_DISABLE_COPY(AppSyncResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
