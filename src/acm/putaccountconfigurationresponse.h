// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTCONFIGURATIONRESPONSE_H
#define QTAWS_PUTACCOUNTCONFIGURATIONRESPONSE_H

#include "acmresponse.h"
#include "putaccountconfigurationrequest.h"

namespace QtAws {
namespace Acm {

class PutAccountConfigurationResponsePrivate;

class QTAWSACM_EXPORT PutAccountConfigurationResponse : public AcmResponse {
    Q_OBJECT

public:
    PutAccountConfigurationResponse(const PutAccountConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountConfigurationResponse)
    Q_DISABLE_COPY(PutAccountConfigurationResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
