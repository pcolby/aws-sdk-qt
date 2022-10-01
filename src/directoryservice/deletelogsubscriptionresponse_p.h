// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETELOGSUBSCRIPTIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeleteLogSubscriptionResponse;

class DeleteLogSubscriptionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeleteLogSubscriptionResponsePrivate(DeleteLogSubscriptionResponse * const q);

    void parseDeleteLogSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLogSubscriptionResponse)
    Q_DISABLE_COPY(DeleteLogSubscriptionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
