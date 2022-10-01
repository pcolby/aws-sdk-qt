// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELFINDINGSREPORTREQUEST_H
#define QTAWS_CANCELFINDINGSREPORTREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class CancelFindingsReportRequestPrivate;

class QTAWSINSPECTOR2_EXPORT CancelFindingsReportRequest : public Inspector2Request {

public:
    CancelFindingsReportRequest(const CancelFindingsReportRequest &other);
    CancelFindingsReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelFindingsReportRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
