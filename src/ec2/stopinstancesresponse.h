// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCESRESPONSE_H
#define QTAWS_STOPINSTANCESRESPONSE_H

#include "ec2response.h"
#include "stopinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class StopInstancesResponsePrivate;

class QTAWSEC2_EXPORT StopInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    StopInstancesResponse(const StopInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInstancesResponse)
    Q_DISABLE_COPY(StopInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
