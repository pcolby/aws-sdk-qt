// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWSTEPSRESPONSE_H
#define QTAWS_GETWORKFLOWSTEPSRESPONSE_H

#include "customerprofilesresponse.h"
#include "getworkflowstepsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowStepsResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetWorkflowStepsResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetWorkflowStepsResponse(const GetWorkflowStepsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowStepsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowStepsResponse)
    Q_DISABLE_COPY(GetWorkflowStepsResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
