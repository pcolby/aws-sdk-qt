// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONDITIONALFORWARDERRESPONSE_H
#define QTAWS_DELETECONDITIONALFORWARDERRESPONSE_H

#include "directoryserviceresponse.h"
#include "deleteconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteConditionalForwarderResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeleteConditionalForwarderResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeleteConditionalForwarderResponse(const DeleteConditionalForwarderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConditionalForwarderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConditionalForwarderResponse)
    Q_DISABLE_COPY(DeleteConditionalForwarderResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
