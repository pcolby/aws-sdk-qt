// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSCHEMAEXTENSIONRESPONSE_H
#define QTAWS_STARTSCHEMAEXTENSIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "startschemaextensionrequest.h"

namespace QtAws {
namespace DirectoryService {

class StartSchemaExtensionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT StartSchemaExtensionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    StartSchemaExtensionResponse(const StartSchemaExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSchemaExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSchemaExtensionResponse)
    Q_DISABLE_COPY(StartSchemaExtensionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
