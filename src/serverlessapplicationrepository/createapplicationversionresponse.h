// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_CREATEAPPLICATIONVERSIONRESPONSE_H

#include "serverlessapplicationrepositoryresponse.h"
#include "createapplicationversionrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class CreateApplicationVersionResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT CreateApplicationVersionResponse : public ServerlessApplicationRepositoryResponse {
    Q_OBJECT

public:
    CreateApplicationVersionResponse(const CreateApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationVersionResponse)
    Q_DISABLE_COPY(CreateApplicationVersionResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
