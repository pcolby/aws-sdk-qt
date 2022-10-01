// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONTEMPLATERESPONSE_P_H
#define QTAWS_CREATECLOUDFORMATIONTEMPLATERESPONSE_P_H

#include "serverlessapplicationrepositoryresponse_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationTemplateResponse;

class CreateCloudFormationTemplateResponsePrivate : public ServerlessApplicationRepositoryResponsePrivate {

public:

    explicit CreateCloudFormationTemplateResponsePrivate(CreateCloudFormationTemplateResponse * const q);

    void parseCreateCloudFormationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationTemplateResponse)
    Q_DISABLE_COPY(CreateCloudFormationTemplateResponsePrivate)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
