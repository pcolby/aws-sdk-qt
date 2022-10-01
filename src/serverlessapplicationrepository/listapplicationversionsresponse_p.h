// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationVersionsResponse;

class ListApplicationVersionsResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit ListApplicationVersionsResponsePrivate(ListApplicationVersionsResponse * const q);

    void parseListApplicationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationVersionsResponse)
    Q_DISABLE_COPY(ListApplicationVersionsResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
