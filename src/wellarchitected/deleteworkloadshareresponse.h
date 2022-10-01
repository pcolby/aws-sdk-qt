// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKLOADSHARERESPONSE_H
#define QTAWS_DELETEWORKLOADSHARERESPONSE_H

#include "wellarchitectedresponse.h"
#include "deleteworkloadsharerequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteWorkloadShareResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT DeleteWorkloadShareResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    DeleteWorkloadShareResponse(const DeleteWorkloadShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWorkloadShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkloadShareResponse)
    Q_DISABLE_COPY(DeleteWorkloadShareResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
