// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHDISKRESPONSE_H
#define QTAWS_DETACHDISKRESPONSE_H

#include "lightsailresponse.h"
#include "detachdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachDiskResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DetachDiskResponse : public LightsailResponse {
    Q_OBJECT

public:
    DetachDiskResponse(const DetachDiskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachDiskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachDiskResponse)
    Q_DISABLE_COPY(DetachDiskResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
