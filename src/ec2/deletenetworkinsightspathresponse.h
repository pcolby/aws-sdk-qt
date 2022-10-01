// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSPATHRESPONSE_H
#define QTAWS_DELETENETWORKINSIGHTSPATHRESPONSE_H

#include "ec2response.h"
#include "deletenetworkinsightspathrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsPathResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsPathResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInsightsPathResponse(const DeleteNetworkInsightsPathRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInsightsPathRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsPathResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsPathResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
