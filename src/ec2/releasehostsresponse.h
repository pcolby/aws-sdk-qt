// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEHOSTSRESPONSE_H
#define QTAWS_RELEASEHOSTSRESPONSE_H

#include "ec2response.h"
#include "releasehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseHostsResponsePrivate;

class QTAWSEC2_EXPORT ReleaseHostsResponse : public Ec2Response {
    Q_OBJECT

public:
    ReleaseHostsResponse(const ReleaseHostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleaseHostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseHostsResponse)
    Q_DISABLE_COPY(ReleaseHostsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
