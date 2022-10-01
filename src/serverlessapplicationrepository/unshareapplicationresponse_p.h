// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREAPPLICATIONRESPONSE_P_H
#define QTAWS_UNSHAREAPPLICATIONRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class UnshareApplicationResponse;

class UnshareApplicationResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit UnshareApplicationResponsePrivate(UnshareApplicationResponse * const q);

    void parseUnshareApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnshareApplicationResponse)
    Q_DISABLE_COPY(UnshareApplicationResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
