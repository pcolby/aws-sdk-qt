// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNINSTANCESRESPONSE_H
#define QTAWS_RUNINSTANCESRESPONSE_H

#include "ec2response.h"
#include "runinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class RunInstancesResponsePrivate;

class QTAWSEC2_EXPORT RunInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    RunInstancesResponse(const RunInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RunInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunInstancesResponse)
    Q_DISABLE_COPY(RunInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
