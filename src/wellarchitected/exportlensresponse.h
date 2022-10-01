// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLENSRESPONSE_H
#define QTAWS_EXPORTLENSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "exportlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class ExportLensResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ExportLensResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ExportLensResponse(const ExportLensRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportLensRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportLensResponse)
    Q_DISABLE_COPY(ExportLensResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
