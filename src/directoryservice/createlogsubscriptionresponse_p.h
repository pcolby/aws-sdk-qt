// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_CREATELOGSUBSCRIPTIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateLogSubscriptionResponse;

class CreateLogSubscriptionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateLogSubscriptionResponsePrivate(CreateLogSubscriptionResponse * const q);

    void parseCreateLogSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLogSubscriptionResponse)
    Q_DISABLE_COPY(CreateLogSubscriptionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
