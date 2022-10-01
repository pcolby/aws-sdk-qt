// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHDISKRESPONSE_H
#define QTAWS_ATTACHDISKRESPONSE_H

#include "lightsailresponse.h"
#include "attachdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachDiskResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AttachDiskResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachDiskResponse(const AttachDiskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachDiskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachDiskResponse)
    Q_DISABLE_COPY(AttachDiskResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
