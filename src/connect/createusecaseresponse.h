// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSECASERESPONSE_H
#define QTAWS_CREATEUSECASERESPONSE_H

#include "connectresponse.h"
#include "createusecaserequest.h"

namespace QtAws {
namespace Connect {

class CreateUseCaseResponsePrivate;

class QTAWSCONNECT_EXPORT CreateUseCaseResponse : public ConnectResponse {
    Q_OBJECT

public:
    CreateUseCaseResponse(const CreateUseCaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUseCaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUseCaseResponse)
    Q_DISABLE_COPY(CreateUseCaseResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
