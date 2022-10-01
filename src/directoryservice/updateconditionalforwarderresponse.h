// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONDITIONALFORWARDERRESPONSE_H
#define QTAWS_UPDATECONDITIONALFORWARDERRESPONSE_H

#include "directoryserviceresponse.h"
#include "updateconditionalforwarderrequest.h"

namespace QtAws {
namespace DirectoryService {

class UpdateConditionalForwarderResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT UpdateConditionalForwarderResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    UpdateConditionalForwarderResponse(const UpdateConditionalForwarderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConditionalForwarderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConditionalForwarderResponse)
    Q_DISABLE_COPY(UpdateConditionalForwarderResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
