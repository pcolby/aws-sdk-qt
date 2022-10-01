// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONDEPENDENCIESRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONDEPENDENCIESRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ListApplicationDependenciesResponse;

class ListApplicationDependenciesResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit ListApplicationDependenciesResponsePrivate(ListApplicationDependenciesResponse * const q);

    void parseListApplicationDependenciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationDependenciesResponse)
    Q_DISABLE_COPY(ListApplicationDependenciesResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
