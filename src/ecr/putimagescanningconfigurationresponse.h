// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGESCANNINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTIMAGESCANNINGCONFIGURATIONRESPONSE_H

#include "ecrresponse.h"
#include "putimagescanningconfigurationrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageScanningConfigurationResponsePrivate;

class QTAWSECR_EXPORT PutImageScanningConfigurationResponse : public EcrResponse {
    Q_OBJECT

public:
    PutImageScanningConfigurationResponse(const PutImageScanningConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutImageScanningConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageScanningConfigurationResponse)
    Q_DISABLE_COPY(PutImageScanningConfigurationResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
