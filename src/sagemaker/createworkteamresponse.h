// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKTEAMRESPONSE_H
#define QTAWS_CREATEWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "createworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateWorkteamResponse(const CreateWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkteamResponse)
    Q_DISABLE_COPY(CreateWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
