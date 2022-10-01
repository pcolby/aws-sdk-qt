// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONRESPONSE_H
#define QTAWS_GETEXTENSIONRESPONSE_H

#include "appconfigresponse.h"
#include "getextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetExtensionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetExtensionResponse(const GetExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionResponse)
    Q_DISABLE_COPY(GetExtensionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
