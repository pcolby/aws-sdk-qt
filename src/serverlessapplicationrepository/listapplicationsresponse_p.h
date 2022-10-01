// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONSRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationsResponse;

class ListApplicationsResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit ListApplicationsResponsePrivate(ListApplicationsResponse * const q);

    void parseListApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationsResponse)
    Q_DISABLE_COPY(ListApplicationsResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
