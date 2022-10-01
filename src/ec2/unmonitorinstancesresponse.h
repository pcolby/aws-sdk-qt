// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNMONITORINSTANCESRESPONSE_H
#define QTAWS_UNMONITORINSTANCESRESPONSE_H

#include "ec2response.h"
#include "unmonitorinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnmonitorInstancesResponsePrivate;

class QTAWSEC2_EXPORT UnmonitorInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    UnmonitorInstancesResponse(const UnmonitorInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnmonitorInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnmonitorInstancesResponse)
    Q_DISABLE_COPY(UnmonitorInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
