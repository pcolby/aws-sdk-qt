// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSECASERESPONSE_H
#define QTAWS_DELETEUSECASERESPONSE_H

#include "connectresponse.h"
#include "deleteusecaserequest.h"

namespace QtAws {
namespace Connect {

class DeleteUseCaseResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteUseCaseResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteUseCaseResponse(const DeleteUseCaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUseCaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUseCaseResponse)
    Q_DISABLE_COPY(DeleteUseCaseResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
