// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTRESOURCECONFIGRESPONSE_H
#define QTAWS_SELECTRESOURCECONFIGRESPONSE_H

#include "configserviceresponse.h"
#include "selectresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class SelectResourceConfigResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT SelectResourceConfigResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    SelectResourceConfigResponse(const SelectResourceConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SelectResourceConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectResourceConfigResponse)
    Q_DISABLE_COPY(SelectResourceConfigResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
