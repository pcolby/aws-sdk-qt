// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTERRESPONSE_H
#define QTAWS_CREATECOMPUTERRESPONSE_H

#include "directoryserviceresponse.h"
#include "createcomputerrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateComputerResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateComputerResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CreateComputerResponse(const CreateComputerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateComputerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComputerResponse)
    Q_DISABLE_COPY(CreateComputerResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
