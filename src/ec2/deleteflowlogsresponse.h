// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWLOGSRESPONSE_H
#define QTAWS_DELETEFLOWLOGSRESPONSE_H

#include "ec2response.h"
#include "deleteflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFlowLogsResponsePrivate;

class QTAWSEC2_EXPORT DeleteFlowLogsResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteFlowLogsResponse(const DeleteFlowLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFlowLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFlowLogsResponse)
    Q_DISABLE_COPY(DeleteFlowLogsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
