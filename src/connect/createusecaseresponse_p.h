// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSECASERESPONSE_P_H
#define QTAWS_CREATEUSECASERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateUseCaseResponse;

class CreateUseCaseResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateUseCaseResponsePrivate(CreateUseCaseResponse * const q);

    void parseCreateUseCaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUseCaseResponse)
    Q_DISABLE_COPY(CreateUseCaseResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
