// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADSHARERESPONSE_H
#define QTAWS_UPDATEWORKLOADSHARERESPONSE_H

#include "wellarchitectedresponse.h"
#include "updateworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadShareResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateWorkloadShareResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateWorkloadShareResponse(const UpdateWorkloadShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkloadShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkloadShareResponse)
    Q_DISABLE_COPY(UpdateWorkloadShareResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
