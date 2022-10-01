// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTCONFIGURATIONRESPONSE_H
#define QTAWS_GETACCOUNTCONFIGURATIONRESPONSE_H

#include "acmresponse.h"
#include "getaccountconfigurationrequest.h"

namespace QtAws {
namespace Acm {

class GetAccountConfigurationResponsePrivate;

class QTAWSACM_EXPORT GetAccountConfigurationResponse : public AcmResponse {
    Q_OBJECT

public:
    GetAccountConfigurationResponse(const GetAccountConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountConfigurationResponse)
    Q_DISABLE_COPY(GetAccountConfigurationResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
