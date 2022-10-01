// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWLOGSRESPONSE_H
#define QTAWS_CREATEFLOWLOGSRESPONSE_H

#include "ec2response.h"
#include "createflowlogsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateFlowLogsResponsePrivate;

class QTAWSEC2_EXPORT CreateFlowLogsResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateFlowLogsResponse(const CreateFlowLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFlowLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFlowLogsResponse)
    Q_DISABLE_COPY(CreateFlowLogsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
