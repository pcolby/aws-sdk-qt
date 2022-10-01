// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTRESPONSE_P_H
#define QTAWS_UPDATETRUSTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UpdateTrustResponse;

class UpdateTrustResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UpdateTrustResponsePrivate(UpdateTrustResponse * const q);

    void parseUpdateTrustResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTrustResponse)
    Q_DISABLE_COPY(UpdateTrustResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
