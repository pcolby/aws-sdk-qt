// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTLENSRESPONSE_H
#define QTAWS_IMPORTLENSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "importlensrequest.h"

namespace QtAws {
namespace WellArchitected {

class ImportLensResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ImportLensResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ImportLensResponse(const ImportLensRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportLensRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportLensResponse)
    Q_DISABLE_COPY(ImportLensResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
