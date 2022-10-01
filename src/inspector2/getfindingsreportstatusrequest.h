// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTSTATUSREQUEST_H
#define QTAWS_GETFINDINGSREPORTSTATUSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class GetFindingsReportStatusRequestPrivate;

class QTAWSINSPECTOR2_EXPORT GetFindingsReportStatusRequest : public Inspector2Request {

public:
    GetFindingsReportStatusRequest(const GetFindingsReportStatusRequest &other);
    GetFindingsReportStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsReportStatusRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
