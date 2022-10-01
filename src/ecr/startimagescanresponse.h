// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMAGESCANRESPONSE_H
#define QTAWS_STARTIMAGESCANRESPONSE_H

#include "ecrresponse.h"
#include "startimagescanrequest.h"

namespace QtAws {
namespace Ecr {

class StartImageScanResponsePrivate;

class QTAWSECR_EXPORT StartImageScanResponse : public EcrResponse {
    Q_OBJECT

public:
    StartImageScanResponse(const StartImageScanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartImageScanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImageScanResponse)
    Q_DISABLE_COPY(StartImageScanResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
