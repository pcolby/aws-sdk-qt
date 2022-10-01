// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDJOBSRESPONSE_P_H
#define QTAWS_LISTBACKENDJOBSRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class ListBackendJobsResponse;

class ListBackendJobsResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit ListBackendJobsResponsePrivate(ListBackendJobsResponse * const q);

    void parseListBackendJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBackendJobsResponse)
    Q_DISABLE_COPY(ListBackendJobsResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
