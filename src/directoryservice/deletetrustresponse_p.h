// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTRESPONSE_P_H
#define QTAWS_DELETETRUSTRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeleteTrustResponse;

class DeleteTrustResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeleteTrustResponsePrivate(DeleteTrustResponse * const q);

    void parseDeleteTrustResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTrustResponse)
    Q_DISABLE_COPY(DeleteTrustResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
