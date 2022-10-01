// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTTASKREQUEST_H
#define QTAWS_CREATEDATASETIMPORTTASKREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class CreateDataSetImportTaskRequestPrivate;

class QTAWSM2_EXPORT CreateDataSetImportTaskRequest : public M2Request {

public:
    CreateDataSetImportTaskRequest(const CreateDataSetImportTaskRequest &other);
    CreateDataSetImportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSetImportTaskRequest)

};

} // namespace M2
} // namespace QtAws

#endif
