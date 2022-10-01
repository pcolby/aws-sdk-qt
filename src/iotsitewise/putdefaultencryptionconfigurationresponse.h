// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTDEFAULTENCRYPTIONCONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "putdefaultencryptionconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class PutDefaultEncryptionConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT PutDefaultEncryptionConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    PutDefaultEncryptionConfigurationResponse(const PutDefaultEncryptionConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDefaultEncryptionConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDefaultEncryptionConfigurationResponse)
    Q_DISABLE_COPY(PutDefaultEncryptionConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
