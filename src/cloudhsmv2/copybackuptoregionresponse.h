// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPTOREGIONRESPONSE_H
#define QTAWS_COPYBACKUPTOREGIONRESPONSE_H

#include "cloudhsmv2response.h"
#include "copybackuptoregionrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CopyBackupToRegionResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT CopyBackupToRegionResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    CopyBackupToRegionResponse(const CopyBackupToRegionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyBackupToRegionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyBackupToRegionResponse)
    Q_DISABLE_COPY(CopyBackupToRegionResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
