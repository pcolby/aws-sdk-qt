// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINERESPONSE_H
#define QTAWS_DESCRIBESTATEMACHINERESPONSE_H

#include "sfnresponse.h"
#include "describestatemachinerequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineResponsePrivate;

class QTAWSSFN_EXPORT DescribeStateMachineResponse : public SfnResponse {
    Q_OBJECT

public:
    DescribeStateMachineResponse(const DescribeStateMachineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStateMachineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStateMachineResponse)
    Q_DISABLE_COPY(DescribeStateMachineResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
