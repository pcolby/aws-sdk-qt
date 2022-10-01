// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWMODULERESPONSE_H
#define QTAWS_DESCRIBECONTACTFLOWMODULERESPONSE_H

#include "connectresponse.h"
#include "describecontactflowmodulerequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowModuleResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeContactFlowModuleResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeContactFlowModuleResponse(const DescribeContactFlowModuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContactFlowModuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactFlowModuleResponse)
    Q_DISABLE_COPY(DescribeContactFlowModuleResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
