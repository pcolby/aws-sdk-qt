// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWRESPONSE_H
#define QTAWS_GETWORKFLOWRESPONSE_H

#include "customerprofilesresponse.h"
#include "getworkflowrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowResponsePrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetWorkflowResponse : public CustomerProfilesResponse {
    Q_OBJECT

public:
    GetWorkflowResponse(const GetWorkflowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkflowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowResponse)
    Q_DISABLE_COPY(GetWorkflowResponse)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
