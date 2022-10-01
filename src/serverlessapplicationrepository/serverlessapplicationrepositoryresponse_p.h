// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYRESPONSE_P_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryResponse;

class ServerlessApplicationRepositoryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ServerlessApplicationRepositoryResponsePrivate(ServerlessApplicationRepositoryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ServerlessApplicationRepositoryResponse)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
