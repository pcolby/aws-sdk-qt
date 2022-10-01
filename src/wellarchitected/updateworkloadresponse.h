// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKLOADRESPONSE_H
#define QTAWS_UPDATEWORKLOADRESPONSE_H

#include "wellarchitectedresponse.h"
#include "updateworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateWorkloadResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT UpdateWorkloadResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    UpdateWorkloadResponse(const UpdateWorkloadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateWorkloadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWorkloadResponse)
    Q_DISABLE_COPY(UpdateWorkloadResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
