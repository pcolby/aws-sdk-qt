// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERVOLUMERESPONSE_H
#define QTAWS_DEREGISTERVOLUMERESPONSE_H

#include "opsworksresponse.h"
#include "deregistervolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterVolumeResponsePrivate;

class QTAWSOPSWORKS_EXPORT DeregisterVolumeResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    DeregisterVolumeResponse(const DeregisterVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterVolumeResponse)
    Q_DISABLE_COPY(DeregisterVolumeResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
