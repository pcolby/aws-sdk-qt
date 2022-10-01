// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDJOBFLOWSTEPSRESPONSE_H
#define QTAWS_ADDJOBFLOWSTEPSRESPONSE_H

#include "emrresponse.h"
#include "addjobflowstepsrequest.h"

namespace QtAws {
namespace Emr {

class AddJobFlowStepsResponsePrivate;

class QTAWSEMR_EXPORT AddJobFlowStepsResponse : public EmrResponse {
    Q_OBJECT

public:
    AddJobFlowStepsResponse(const AddJobFlowStepsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddJobFlowStepsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddJobFlowStepsResponse)
    Q_DISABLE_COPY(AddJobFlowStepsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
