// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINSIGHTSPATHRESPONSE_H
#define QTAWS_CREATENETWORKINSIGHTSPATHRESPONSE_H

#include "ec2response.h"
#include "createnetworkinsightspathrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInsightsPathResponsePrivate;

class QTAWSEC2_EXPORT CreateNetworkInsightsPathResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNetworkInsightsPathResponse(const CreateNetworkInsightsPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkInsightsPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkInsightsPathResponse)
    Q_DISABLE_COPY(CreateNetworkInsightsPathResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
