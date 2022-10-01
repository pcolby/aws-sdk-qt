// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTRESPONSE_P_H
#define QTAWS_CREATETRUSTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateTrustResponse;

class CreateTrustResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateTrustResponsePrivate(CreateTrustResponse * const q);

    void parseCreateTrustResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTrustResponse)
    Q_DISABLE_COPY(CreateTrustResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
