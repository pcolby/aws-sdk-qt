// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNVOLUMERESPONSE_H
#define QTAWS_ASSIGNVOLUMERESPONSE_H

#include "opsworksresponse.h"
#include "assignvolumerequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignVolumeResponsePrivate;

class QTAWSOPSWORKS_EXPORT AssignVolumeResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    AssignVolumeResponse(const AssignVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssignVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignVolumeResponse)
    Q_DISABLE_COPY(AssignVolumeResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
