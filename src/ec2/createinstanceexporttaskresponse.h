// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEEXPORTTASKRESPONSE_H
#define QTAWS_CREATEINSTANCEEXPORTTASKRESPONSE_H

#include "ec2response.h"
#include "createinstanceexporttaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateInstanceExportTaskResponsePrivate;

class QTAWSEC2_EXPORT CreateInstanceExportTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateInstanceExportTaskResponse(const CreateInstanceExportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceExportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceExportTaskResponse)
    Q_DISABLE_COPY(CreateInstanceExportTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
