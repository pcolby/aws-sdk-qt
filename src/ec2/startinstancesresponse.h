// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCESRESPONSE_H
#define QTAWS_STARTINSTANCESRESPONSE_H

#include "ec2response.h"
#include "startinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class StartInstancesResponsePrivate;

class QTAWSEC2_EXPORT StartInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    StartInstancesResponse(const StartInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstancesResponse)
    Q_DISABLE_COPY(StartInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
