// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYTRUSTRESPONSE_P_H
#define QTAWS_VERIFYTRUSTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class VerifyTrustResponse;

class VerifyTrustResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit VerifyTrustResponsePrivate(VerifyTrustResponse * const q);

    void parseVerifyTrustResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyTrustResponse)
    Q_DISABLE_COPY(VerifyTrustResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
