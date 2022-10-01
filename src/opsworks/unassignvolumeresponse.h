// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNVOLUMERESPONSE_H
#define QTAWS_UNASSIGNVOLUMERESPONSE_H

#include "opsworksresponse.h"
#include "unassignvolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignVolumeResponsePrivate;

class QTAWSOPSWORKS_EXPORT UnassignVolumeResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UnassignVolumeResponse(const UnassignVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnassignVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignVolumeResponse)
    Q_DISABLE_COPY(UnassignVolumeResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
