// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSREPORTREQUEST_H
#define QTAWS_CREATEFINDINGSREPORTREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class CreateFindingsReportRequestPrivate;

class QTAWSINSPECTOR2_EXPORT CreateFindingsReportRequest : public Inspector2Request {

public:
    CreateFindingsReportRequest(const CreateFindingsReportRequest &other);
    CreateFindingsReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFindingsReportRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
