// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTABLEDATAIMPORTJOBRESPONSE_H
#define QTAWS_STARTTABLEDATAIMPORTJOBRESPONSE_H

#include "honeycoderesponse.h"
#include "starttabledataimportjobrequest.h"

namespace QtAws {
namespace Honeycode {

class StartTableDataImportJobResponsePrivate;

class QTAWSHONEYCODE_EXPORT StartTableDataImportJobResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    StartTableDataImportJobResponse(const StartTableDataImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTableDataImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTableDataImportJobResponse)
    Q_DISABLE_COPY(StartTableDataImportJobResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
