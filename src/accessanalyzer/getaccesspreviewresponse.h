// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPREVIEWRESPONSE_H
#define QTAWS_GETACCESSPREVIEWRESPONSE_H

#include "accessanalyzerresponse.h"
#include "getaccesspreviewrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAccessPreviewResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT GetAccessPreviewResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    GetAccessPreviewResponse(const GetAccessPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPreviewResponse)
    Q_DISABLE_COPY(GetAccessPreviewResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
