// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPREVIEWRESPONSE_H
#define QTAWS_CREATEACCESSPREVIEWRESPONSE_H

#include "accessanalyzerresponse.h"
#include "createaccesspreviewrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class CreateAccessPreviewResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT CreateAccessPreviewResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    CreateAccessPreviewResponse(const CreateAccessPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccessPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPreviewResponse)
    Q_DISABLE_COPY(CreateAccessPreviewResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
