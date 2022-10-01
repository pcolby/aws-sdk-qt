// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADRESPONSE_H
#define QTAWS_DELETEWORKLOADRESPONSE_H

#include "wellarchitectedresponse.h"
#include "deleteworkloadrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteWorkloadResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    DeleteWorkloadResponse(const DeleteWorkloadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkloadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkloadResponse)
    Q_DISABLE_COPY(DeleteWorkloadResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
