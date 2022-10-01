// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSCHEMAEXTENSIONRESPONSE_H
#define QTAWS_CANCELSCHEMAEXTENSIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "cancelschemaextensionrequest.h"

namespace QtAws {
namespace DirectoryService {

class CancelSchemaExtensionResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CancelSchemaExtensionResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CancelSchemaExtensionResponse(const CancelSchemaExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelSchemaExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSchemaExtensionResponse)
    Q_DISABLE_COPY(CancelSchemaExtensionResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
