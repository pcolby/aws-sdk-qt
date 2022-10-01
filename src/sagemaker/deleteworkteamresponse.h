// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKTEAMRESPONSE_H
#define QTAWS_DELETEWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteWorkteamResponse(const DeleteWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkteamResponse)
    Q_DISABLE_COPY(DeleteWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
