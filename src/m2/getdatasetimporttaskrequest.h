// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETIMPORTTASKREQUEST_H
#define QTAWS_GETDATASETIMPORTTASKREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class GetDataSetImportTaskRequestPrivate;

class QTAWSM2_EXPORT GetDataSetImportTaskRequest : public M2Request {

public:
    GetDataSetImportTaskRequest(const GetDataSetImportTaskRequest &other);
    GetDataSetImportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetImportTaskRequest)

};

} // namespace M2
} // namespace QtAws

#endif
