// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSRESPONSE_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSRESPONSE_H

#include "sesv2response.h"
#include "putconfigurationsetreputationoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetReputationOptionsResponsePrivate;

class QTAWSSESV2_EXPORT PutConfigurationSetReputationOptionsResponse : public SESv2Response {
    Q_OBJECT

public:
    PutConfigurationSetReputationOptionsResponse(const PutConfigurationSetReputationOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigurationSetReputationOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetReputationOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetReputationOptionsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
