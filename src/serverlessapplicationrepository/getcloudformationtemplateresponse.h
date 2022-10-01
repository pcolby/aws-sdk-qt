// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLOUDFORMATIONTEMPLATERESPONSE_H
#define QTAWS_GETCLOUDFORMATIONTEMPLATERESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "getcloudformationtemplaterequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class GetCloudFormationTemplateResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT GetCloudFormationTemplateResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    GetCloudFormationTemplateResponse(const GetCloudFormationTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCloudFormationTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCloudFormationTemplateResponse)
    Q_DISABLE_COPY(GetCloudFormationTemplateResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
