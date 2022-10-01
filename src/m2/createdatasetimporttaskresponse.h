// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTTASKRESPONSE_H
#define QTAWS_CREATEDATASETIMPORTTASKRESPONSE_H

#include "m2response.h"
#include "createdatasetimporttaskrequest.h"

namespace QtAws {
namespace M2 {

class CreateDataSetImportTaskResponsePrivate;

class QTAWSM2_EXPORT CreateDataSetImportTaskResponse : public M2Response {
    Q_OBJECT

public:
    CreateDataSetImportTaskResponse(const CreateDataSetImportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSetImportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSetImportTaskResponse)
    Q_DISABLE_COPY(CreateDataSetImportTaskResponse)

};

} // namespace M2
} // namespace QtAws

#endif
