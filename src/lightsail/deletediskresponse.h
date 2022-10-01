// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKRESPONSE_H
#define QTAWS_DELETEDISKRESPONSE_H

#include "lightsailresponse.h"
#include "deletediskrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteDiskResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteDiskResponse(const DeleteDiskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDiskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDiskResponse)
    Q_DISABLE_COPY(DeleteDiskResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
