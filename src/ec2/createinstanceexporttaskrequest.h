// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEXPORTTASKREQUEST_H
#define QTAWS_CREATEINSTANCEEXPORTTASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceExportTaskRequestPrivate;

class QTAWSEC2_EXPORT CreateInstanceExportTaskRequest : public Ec2Request {

public:
    CreateInstanceExportTaskRequest(const CreateInstanceExportTaskRequest &other);
    CreateInstanceExportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceExportTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
