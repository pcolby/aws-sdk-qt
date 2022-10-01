// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMPORTTASKRESPONSE_H
#define QTAWS_CANCELIMPORTTASKRESPONSE_H

#include "ec2response.h"
#include "cancelimporttaskrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelImportTaskResponsePrivate;

class QTAWSEC2_EXPORT CancelImportTaskResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelImportTaskResponse(const CancelImportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelImportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelImportTaskResponse)
    Q_DISABLE_COPY(CancelImportTaskResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
