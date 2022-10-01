// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANALYZERRESPONSE_H
#define QTAWS_DELETEANALYZERRESPONSE_H

#include "accessanalyzerresponse.h"
#include "deleteanalyzerrequest.h"

namespace QtAws {
namespace AccessAnalyzer {

class DeleteAnalyzerResponsePrivate;

class QTAWSACCESSANALYZER_EXPORT DeleteAnalyzerResponse : public AccessAnalyzerResponse {
    Q_OBJECT

public:
    DeleteAnalyzerResponse(const DeleteAnalyzerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnalyzerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnalyzerResponse)
    Q_DISABLE_COPY(DeleteAnalyzerResponse)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
