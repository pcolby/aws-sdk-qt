// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERSFORIMPORTRESPONSE_H
#define QTAWS_GETPARAMETERSFORIMPORTRESPONSE_H

#include "kmsresponse.h"
#include "getparametersforimportrequest.h"

namespace QtAws {
namespace Kms {

class GetParametersForImportResponsePrivate;

class QTAWSKMS_EXPORT GetParametersForImportResponse : public KmsResponse {
    Q_OBJECT

public:
    GetParametersForImportResponse(const GetParametersForImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetParametersForImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParametersForImportResponse)
    Q_DISABLE_COPY(GetParametersForImportResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
