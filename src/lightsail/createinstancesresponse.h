// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCESRESPONSE_H
#define QTAWS_CREATEINSTANCESRESPONSE_H

#include "lightsailresponse.h"
#include "createinstancesrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateInstancesResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateInstancesResponse(const CreateInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstancesResponse)
    Q_DISABLE_COPY(CreateInstancesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
