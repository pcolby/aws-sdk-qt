// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMPORTTASKREQUEST_H
#define QTAWS_CANCELIMPORTTASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelImportTaskRequestPrivate;

class QTAWSEC2_EXPORT CancelImportTaskRequest : public Ec2Request {

public:
    CancelImportTaskRequest(const CancelImportTaskRequest &other);
    CancelImportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelImportTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
