// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONCHANGESETRESPONSE_P_H
#define QTAWS_CREATECLOUDFORMATIONCHANGESETRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationChangeSetResponse;

class CreateCloudFormationChangeSetResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit CreateCloudFormationChangeSetResponsePrivate(CreateCloudFormationChangeSetResponse * const q);

    void parseCreateCloudFormationChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationChangeSetResponse)
    Q_DISABLE_COPY(CreateCloudFormationChangeSetResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
