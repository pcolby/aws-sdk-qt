// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCESRESPONSE_H
#define QTAWS_TERMINATEINSTANCESRESPONSE_H

#include "ec2response.h"
#include "terminateinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class TerminateInstancesResponsePrivate;

class QTAWSEC2_EXPORT TerminateInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    TerminateInstancesResponse(const TerminateInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateInstancesResponse)
    Q_DISABLE_COPY(TerminateInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
