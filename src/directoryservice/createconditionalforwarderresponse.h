// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONDITIONALFORWARDERRESPONSE_H
#define QTAWS_CREATECONDITIONALFORWARDERRESPONSE_H

#include "directoryserviceresponse.h"
#include "createconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateConditionalForwarderResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateConditionalForwarderResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CreateConditionalForwarderResponse(const CreateConditionalForwarderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConditionalForwarderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConditionalForwarderResponse)
    Q_DISABLE_COPY(CreateConditionalForwarderResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
