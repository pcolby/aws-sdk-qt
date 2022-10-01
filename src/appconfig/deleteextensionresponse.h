// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONRESPONSE_H
#define QTAWS_DELETEEXTENSIONRESPONSE_H

#include "appconfigresponse.h"
#include "deleteextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteExtensionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteExtensionResponse(const DeleteExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExtensionResponse)
    Q_DISABLE_COPY(DeleteExtensionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
