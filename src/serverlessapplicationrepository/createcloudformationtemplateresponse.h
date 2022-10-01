// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONTEMPLATERESPONSE_H
#define QTAWS_CREATECLOUDFORMATIONTEMPLATERESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "createcloudformationtemplaterequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateCloudFormationTemplateResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT CreateCloudFormationTemplateResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    CreateCloudFormationTemplateResponse(const CreateCloudFormationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCloudFormationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCloudFormationTemplateResponse)
    Q_DISABLE_COPY(CreateCloudFormationTemplateResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
