// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETIMPORTTASKRESPONSE_H
#define QTAWS_GETDATASETIMPORTTASKRESPONSE_H

#include "m2response.h"
#include "getdatasetimporttaskrequest.h"

namespace QtAws {
namespace M2 {

class GetDataSetImportTaskResponsePrivate;

class QTAWSM2_EXPORT GetDataSetImportTaskResponse : public M2Response {
    Q_OBJECT

public:
    GetDataSetImportTaskResponse(const GetDataSetImportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataSetImportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetImportTaskResponse)
    Q_DISABLE_COPY(GetDataSetImportTaskResponse)

};

} // namespace M2
} // namespace QtAws

#endif
