// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATETARGETINSTANCESRESPONSE_H
#define QTAWS_TERMINATETARGETINSTANCESRESPONSE_H

#include "mgnresponse.h"
#include "terminatetargetinstancesrequest.h"

namespace QtAws {
namespace Mgn {

class TerminateTargetInstancesResponsePrivate;

class QTAWSMGN_EXPORT TerminateTargetInstancesResponse : public MgnResponse {
    Q_OBJECT

public:
    TerminateTargetInstancesResponse(const TerminateTargetInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateTargetInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateTargetInstancesResponse)
    Q_DISABLE_COPY(TerminateTargetInstancesResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
