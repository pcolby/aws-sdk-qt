// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONVERSIONRESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateApplicationVersionResponse;

class CreateApplicationVersionResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit CreateApplicationVersionResponsePrivate(CreateApplicationVersionResponse * const q);

    void parseCreateApplicationVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationVersionResponse)
    Q_DISABLE_COPY(CreateApplicationVersionResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
