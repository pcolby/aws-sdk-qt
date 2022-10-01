// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKTEAMRESPONSE_H
#define QTAWS_UPDATEWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "updateworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateWorkteamResponse(const UpdateWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkteamResponse)
    Q_DISABLE_COPY(UpdateWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
